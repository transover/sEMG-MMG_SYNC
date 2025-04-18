%**************************************************************************
%   Subfunction:  no
%   Author:  yuhang
%   Contact:  708842749@qq.com
%   Date Created:  2023.07.29 20:35:44
%   Version:  matlab R2022b
%   Description:  弹出界面，输入实验、被试信息
%{
    参数: ( , , )
        param1:  
        param2:  
        return:  Experiment 结构体
    调用示例:  
    -----------------------------------------------------------------------
        Experiment = Get_Experiment_Info();
    -----------------------------------------------------------------------
%}
%   History:  
%             
%**************************************************************************
function Experiment = Get_Experiment_Info()
    Experiment.prompt = {'实验名称','被试编号','姓名','年龄','时间','实验内容'};
    Experiment.dlgtitle='EMG手势实验';
    Experiment.CurrentDateTime = char(datetime('now', 'format','yyyy-MM-dd HH:mm:ss')); %获取创建时间
    Experiment.dims=[1 60;1 60;1 60;1 60;1 60;3 60];
    Experiment.definput={ 'EMG',...
                          '001', ...
                          '余杭', ...
                          '24', ...
                          Experiment.CurrentDateTime,...
                          '肌电实验，每4s刷新图片，根据图片提示做出动作，动作完成后按空格键'} ; % 默认的一个输入或多个输入值
    Experiment.opts.Resize = 'on';
    Experiment.opts.WindowStyle = 'normal';
    Experiment.opts.Interpreter = 'tex';
    Experiment.subinfo=inputdlg(Experiment.prompt,Experiment.dlgtitle,Experiment.dims,Experiment.definput,Experiment.opts);  % 弹出窗口记录信息
end
