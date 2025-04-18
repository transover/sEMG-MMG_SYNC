%**************************************************************************
%   Subfunction:  no
%   Author:  yuhang
%   Contact:  708842749@qq.com
%   Date Created:  2023.07.25 21:54:58
%   Version:  matlab R2022b
%   Description:  
%            查看PTB目录：PsychtoolboxRoot
%            使用PTB PsychPortAudio输出声音  MakeBeep制造Beep音频
%            PsychPortAudio是一个高时间精度的音频驱动器 (High precision sound driver)
%            在Psychtoolbox-3中（PTB-3），听觉刺激呈现主要由PsyPortAudio相关函数来完成
%            参考：https://www.lrdc.pitt.edu/maplelab/matlab_audio.html#pc
%            如果使用32位电脑，需要配置PsychPortAudio两个步骤（64位电脑，该步骤无用）：
%                 1.使用正确的文件和驱动程序设置计算机：
%                      （1）双击ASIO4ALL_2_15_SCN.exe，自动安装ASIO驱动
%                      （2）将portaudio_x86中的驱动文件portaudio_x86.dll（该驱动用于指示PTB如何使用ASIO驱动）放在matlab程序脚本同一目录下
%                 2.在 MATLAB 中编辑您的实验以使用 PsychPortAudio，使用前需要InitializePsychSound 初始化声音驱动程序
%            查看音频设备：
%                 devices=PsychPortAudio('GetDevices')
%            特性：
%                 异步操作：声音播放在后台工作，而代码继续执行其他操作
%                 计划播放：在某些系统设置中，计划的播放开始可以精确到亚毫秒级别
%                 低延时高精度：允许以非常低的开始延迟即时开始声音播放
%            ERP事件时间：
%            ERP事件之间的时间距离长度可以用2个指标来衡量：
%               1."刺激起始时间差"（stimulus onset asynchrony，SOA，即从上一个刺激出现的时间到下一个刺激出现的时间）
%               2."刺激间间隔"（inter-stimulus interval，ISI，即从上一个刺激消失的时间到下一个刺激出现的时间）
%   History:  
%            修改clear为clear all, 这样保证 InitializePsychSound重复加载
%**************************************************************************
function useTime=PTB_Voice_beep(pythonCurrentDateTime)
    %% 弹出界面，输入被试信息
    matlabCurrentDateTime = datetime('now','TimeZone','local','format','yyyy-MM-dd HH:mm:ss:SSSSSS'); % 获取当前真实时间戳，近似Mark标记的零时刻基准对应的真实时间
    initStartTime=GetSecs;  % 用于 PTB 时间Mark标记的零时刻基准
    Experiment = Get_Experiment_Info();
    Experiment.pythonInitTimeStamp = pythonCurrentDateTime;   % python初始时间戳（用于不同程序的同步）
    Experiment.matlabInitTimeStamp = char(matlabCurrentDateTime); % matlab初始时间戳（用于不同程序的同步）
    if isempty(Experiment.subinfo)
        disp('Cancel Experiment!')
        return
    end

    %% 生成含有500*4 序列 1112 1112…… 1112, 试次间间隔
    [stimulus_list,intervals]=generate_voice_list(2,4.8); % 组数（必须为偶数），试次间间隔（上一次刺激声音结束到下一次刺激声音开始的间隔）为4.8s

    %% 初始化声音驱动程序
    InitializePsychSound;

    %%  制造声音数据
    myBeep(1).freq = 1000;           % 声音频率 (Frequency of the sound)
    myBeep(2).freq = 4000;
    myBeep(1).beepLengthSecs = 0.2;  % 声音持续时长(s)
    myBeep(2).beepLengthSecs = 0.2;
    myBeep(1).sampleRate = 44100;    % 采样率(sample rate)，在当今的主流采集卡上，采样频率一般共分为11025Hz、22050Hz、24000Hz、44100Hz、48000Hz五个等级
    myBeep(2).sampleRate = 44100;
    myBeep(1).beep = MakeBeep(myBeep(1).freq, myBeep(1).beepLengthSecs, myBeep(1).sampleRate); % 音频的音高(Hz),音频的时长(s)，采样率(Hz)
    myBeep(2).beep = MakeBeep(myBeep(2).freq, myBeep(2).beepLengthSecs, myBeep(2).sampleRate);

    %% PTB音频输出
    AudioPlayer.repetitions = 1;         % 播放几次声音，表现为声音持续时间
    AudioPlayer.startCue = 0;            % 单次开始播放时间（0 = 立即开始）
    % AudioPlayer.beepPauseTime = 1;       % 播放声音之间的间隔
    % AudioPlayer.waitForDeviceStart = 1;  % 是否等待设备真正开始（1 = 是） 详情查看 help PsychPortAudio

    AudioPlayer.devices=PsychPortAudio('GetDevices'); % 查看音频设备 音频设备编号（DeviceIndex）可作为deviceid
    AudioPlayer.deviceid = [];           % [] = 使用默认设备播放声音
    AudioPlayer.mode = 1;                % 1 = 仅播放声音, 2 = 记录声音, 3 = 播放并记录声音（不稳定会导致MATLAB崩溃）
    AudioPlayer.reqlatencyclass = 2;     % 0 = 忽略声音延迟, 1 = 低延迟, 2 = 完全接管声音装置，尽可能获得最小延迟 3 = 因此干扰了其它声音的播放也在所不惜 4= 牺牲高内存换取至高效果
    AudioPlayer.sampleRate=myBeep(1).sampleRate; % 采样率(Sample rate)
    AudioPlayer.nrchannels = 1;          % 声音通道数 1= 单通道 , 2 = 双通道立体声
    AudioPlayer.volume = 0.2;            % 声音音量 0.2 = 20%
    pahandle = PsychPortAudio('Open', AudioPlayer.deviceid, AudioPlayer.mode, AudioPlayer.reqlatencyclass, AudioPlayer.sampleRate, AudioPlayer.nrchannels); % 打开 Psych-Audio 端口，配置参数
    PsychPortAudio('Volume', pahandle, AudioPlayer.volume);  % 设置音量

    % 将声音数据输入缓冲器，先左耳后右耳
    PsychPortAudio('FillBuffer', pahandle, myBeep(1).beep);
    PsychPortAudio('Start', pahandle, AudioPlayer.repetitions,0);
    AudioPlayer.startCue=0;

    AudioPlayer.initstartTime= initStartTime;  % 实验开始时间
    for i = 1:length(stimulus_list)
        if stimulus_list(i)==1
            PsychPortAudio('FillBuffer', pahandle, myBeep(1).beep); % 填充mybeep1
            PsychPortAudio('Start', pahandle, AudioPlayer.repetitions, AudioPlayer.startCue,1); % 开始播放声音, 异步程序，不受WaitSecs阻塞影响

            WaitSecs(0.05); % 等待发送完毕，等待时间必须小于上一声音开始到下一声音开始的时间，保证不影响时序

            % 声音开始时间 actualStartTime，声音结束时间 estStoptime
            [actualStartTime, endPositionSecs, xruns, estStoptime] = PsychPortAudio('Stop', pahandle, 1, 1);
            AudioPlayer.startCue = estStoptime + intervals(i); % 保证每次开始时间都与上一次结束时间差为intervals
            % 等待声音结束；这里我们使用一种更精确的调控时间的方法，详情请见：https://groups.yahoo.com/neo/groups/psychtoolbox/conversations/messages/20863
        elseif stimulus_list(i)==2
             PsychPortAudio('FillBuffer', pahandle, myBeep(2).beep); % 填充mybeep2
             PsychPortAudio('Start', pahandle, AudioPlayer.repetitions, AudioPlayer.startCue,1); % 开始播放声音

             WaitSecs(0.05);

             [actualStartTime, endPositionSecs, xruns, estStoptime] = PsychPortAudio('Stop', pahandle, 1, 1);
             AudioPlayer.startCue = estStoptime + intervals(i);
        end
        % 记录刺激信息，显示
        Stimulus(i).index=i;                                                              % 刺激编号
        Stimulus(i).type=stimulus_list(i);                                                % 刺激类型
        Stimulus(i).actualStartTime = actualStartTime-AudioPlayer.initstartTime;          % 刺激开始时间
        Stimulus(i).estStoptime = estStoptime-AudioPlayer.initstartTime;                  % 刺激结束时间
        Stimulus(i).beepLengthSecs= Stimulus(i).estStoptime-Stimulus(i).actualStartTime;  % 刺激持续时间
        Stimulus(i).interval= intervals(i);                                               % 刺激上一次结束到本次开始时间
        if Stimulus(i).index>1
            Stimulus(i).Span = Stimulus(i).actualStartTime-Stimulus(i-1).actualStartTime; % 刺激上一次开始到本次开始时间
            disp(sprintf('Progress: %d / %d  stimulus_type:%d  beepLengthSecs:%fs start_to_start:%fs', ...
                Stimulus(i).index, ...
                length(stimulus_list), ...
                Stimulus(i).type, ...
                Stimulus(i).beepLengthSecs, ...
                Stimulus(i).Span))
        else
            Stimulus(i).Span = Stimulus(i).actualStartTime;
            disp(sprintf('Progress: %d / %d  stimulus_type:%d  beepLengthSecs:%fs start_to_start:%fs', ...
                Stimulus(i).index, ...
                length(stimulus_list), ...
                Stimulus(i).type, ...
                Stimulus(i).beepLengthSecs, ...
                Stimulus(i).Span))
        end
    end

    %% 关闭声音设备
    PsychPortAudio('Close', pahandle);

    Experiment.matlabEndDateTime = char(datetime('now','TimeZone','local','format','yyyy-MM-dd HH:mm:ss:SSSSSS')); % 获取当前真实时间戳
    Experiment.useTime.initStartTime = initStartTime; % 程序开始时间（用于本程序的0时刻基准）
    Experiment.useTime.overEndTime = GetSecs;         % 程序结束时间
    useTime=Experiment.useTime.overEndTime-Experiment.useTime.initStartTime;  % 程序用时

    %% 保存结果
    saveDir='Results'; % 需要新建record路径 将结果保存到record里面
    saveFileName=[Experiment.subinfo{2},'_',Experiment.subinfo{3},'.mat'];
    if ~exist(saveDir,'dir')
        error('saveDir is not exist!')
    end
    save(fullfile(saveDir,saveFileName),'Experiment','Stimulus');  % 将结果以被试编号保存下来
    disp(['Experiment is over, the result is save in: ',fullfile(saveDir,saveFileName)])
end

