<div style="display: flex; align-items: center; gap: 1em;">
  <img src="https://github.com/user-attachments/assets/b04f1bf5-3ece-43a2-8388-e098fa0c9168" alt="logo" style="height: 50px; object-fit: contain;">
  <div>
    <a href="https://github.com/transover/sEMG-MMG_SYNC/blob/main/README.md"><b>English</b></a>
    ｜
    <a><b>简体中文</b></a>
  </div>
</div>

# 示意图
<div style="display: flex; flex-wrap: nowrap; align-items: center; justify-content: space-between;">
  <img src="https://github.com/transover/sEMG-MMG_SYNC/blob/main/en/SchematicDiagram_SignalAcquisition.svg" alt="SchematicDiagram_SignalAcquisition" style="height: 350px; max-width: 45%; object-fit: contain;">
  <img src="https://github.com/transover/sEMG-MMG_SYNC/blob/main/en/NITaskArchitecture.svg" alt="NITaskArchitecture" style="height: 350px; max-width: 45%; object-fit: contain;">
</div>

# 使用说明
表面肌电信号和肌磁信号的同步采集与分析：sEMG-MMG任务，**NI9205** 和 **TCP/IP** 被用于采集由 **Quspin** 和 **BioSemi** 生成的数据。
- 通过 National Instruments 的 **cDAQ** 单元，完成了 **QuSpin**（OPMs 设备）、**BioSemi**（sEMG/ECG 设备）、**CIYENIC**（肌肉力量设备）等设备的模拟数据采集。该接口实现了多个设备数据流的多线程同步执行，核心技术围绕 **NI-DAQmx**、**PsychToolBox/PsychoPy** 以及 **TCP/IP** 协议展开。**NI-DAQmx** 基于 ctypes 库，是一个复杂且高度面向对象的封装，用于开发 **C API** 实现。串行/并行协议通过串口或并口控制和记录刺激电平（需要 **LPT** 驱动，**InpOut32/64** 是一个开源的 Windows **DLL** 和驱动程序，用于直接访问硬件端口）。
- **PsychoPy** 基于底层 **PsychToolBox** 控制，结合 OpenGL 的图形渲染优势与简洁的语法，提供刺激呈现与控制，支持异步高精度的计划性定时，广泛应用于认知神经科学和实验心理学研究中。**TCP/IP** 协议通过数据流截取无线实时获取传感器信息。
- 当连接状态、显示状态、采集状态以及刺激指示灯均为开启时，点击开始录制数据，点击暂停结束录制，数据将会被自动保存为三个独立的文件。

对于sEMG-MMG信号获取任务，你可以在 <a href="https://github.com/transover/sEMG-MMG_SYNC/releases/UI_Collector">Release</a> 中下载**UI_Collector.exe** 工具，如下图所示:

<p style="align: center;">
  <img src="https://github.com/transover/sEMG-MMG_SYNC/blob/main/ExampleData/SignalAcquisition.gif" alt="SignalAcquisition" style="height: 300px; width: auto; max-width: 45%; object-fit: scale-down;">
  <img src="https://github.com/transover/sEMG-MMG_SYNC/blob/main/ExampleData/SignalPlot.jpg" alt="SiganlPlotWindow" style="height: 300px; width: auto; max-width: 45%; object-fit: scale-down;">
</p>

### 1. 使用NI9205采集板卡，并安装NI驱动：
- NI-DAQmx_driver目录下的ni-daqmx_24.0_online.exe，选择默认安装配置即可

### 2. 使用BioSemi采集器，并安装TCP/IP服务端：
- 下载BioSemi目录下的ACTIVIEW806，直接使用，若缺少Labview文件则安装LabView RuntimeEngine 2016 (64bit)/setup.exe
- 运行BioSemi目录下的批处理文件启动ActView806-Lores.exe，并在配置文件中选择ACTIVIEW806/Configuring/sEMG_A32_Config.cfg
- 将TCP Server本地端口设置为8888，TCP subset 选择A1~A32(32)

### 3. 完成TCP/IP连接，成功连接时选择A1~A32查看ActView806界面的采集变化：
#### 步骤：
        1.当用户开始收集数据时，服务端 TCP Listening round图标变为绿色，表示Biosemi ActiveTwo正在侦听并准备建立连接。
        2.用户运行客户端函数，连接成功后，在Biosemi ActiveTwo中，TCP Connected圆形图标将变为绿色，这表明Biosemi正在向客户端传输数据。
        3.读取数据（连接建立后，参数被禁用，直到连接终止后才能更改，接收和传输的字节数也在Biosemi ActiveTwo中报告）

#### 注意事项：
        1.用户需要确保客户端TCP/IP函数中的参数与Biosemi ActiveTwo中设置的参数匹配。
        2.注意，由于Biosemi ActiveTwo充当服务器，除非Biosemi ActiveTwo系统在显示或记录模式下运行，否则无法建立连接。
        3.Biosemi ActiveTwo中的参数位于TCP服务器页签中，在运行Biosemi ActiveTwo前需要进行调整。在Biosemi ActiveTwo开始获取数据后，即使处于显示模式，也无法更改它们。
        4.注意选择通道数，如果不选择，即使成功连接也无法读数
        5.通过 TCP/IP 的流会导致几百毫秒的延迟和数十毫秒的抖动，不能直接将 TCP/IP 流式传输的数据用于精确时序，需要建立缓冲区
        ![Data Transfer Protocol-24bit](https://github.com/user-attachments/assets/20d02826-d712-421e-8cf5-1f521aea045d)

####  参数（TCP/IP包含用于与Biosemi建立连接的参数）：
        •IP地址 host:
            如果运行在用于运行Biosemi ActiveTwo的同一台计算机上，则值为127.0.0.1。否则，ip地址必须是运行Biosemi ActiveTwo的计算机的ip地址。
        •端口 port:
            用于通信的端口。它需要与Biosemi ActiveTwo中TCP服务端报告的值匹配，缺省值是8888。
        •采样数/包 tcpsamples:
            这是Biosemi ActiveTwo发送的每个数据包中包含的样本点数量。它取决于用户选择的采样频率。
        •字节/样本 bytes:
            这是Biosemi ActiveTwo用来表示每个样本的字节数。无论采样频率如何，它都是固定的，用户不能改变它。
        •通道数+触发器 channels:
            这显示了用户选择的通道数（加上触发器）。它由通道项控制，通道项将在专用于参数EEG数据的部分(小节:参数Biosemi)中进行描述。
            该值必须与Biosemi ActiveTwo中报告的值匹配。
### 4. 启动UI_Collector，并安装Help指示完成数据采集
1.  启动软件，硬件连接NI9205则可见 **【连接状态】** 指示灯亮，否则弹出错误提示
2.  勾选 **【启用肌电】**，可见 **【肌电】** 指示灯亮
3.  输入刺激信息，点击 **【刺激呈现】** ，弹出实验范式提示，点击 **【OK】** 可见 **【刺激】** 指示灯亮
4.  点击 **【记录】**，可见 **【采集状态】** 指示灯亮，表示数据流将实时写入文件（记录精确时间需要先点击 **【记录】** 进入记录模式，再点击 **【开始】**）
5.  点击 **【开始】**，可见 **【显示状态】** 指示灯亮，表示NI任务开启，开始采集并显示数据（如果没有点击 **【记录】** 则数据仅预览而不保存）
6.  点击 **【停止】**， **【显示状态】** 和 **【采集状态】** 指示灯灭，表示采集或预览任务暂停（在刺激呈现模式下不可再次点击 **【开始】**）
7.  点击 **【关闭】**，可见所有指示灯灭，表示任务结束，此时若要再次采集需重启软件
8.  点击 **【保存】**（记录模式下无需），将图中局部数据保存到自定义文件（注：全部数据时不推荐使用，实时数据可自动保存，使用该方式长时间记录需要大量内存）
9.  点击工具栏 **【导出(PDF)】**，可导出实验信息为PDF文件
10.  点击工具栏 **【查看时序】**，可查看时序信息，比较各模态的起止时间和延时
11.  点击工具栏 **【绘制图像】**，可绘制高清图像，预览采集数据
12.  勾选 **【启用滤波】**，可对实时图像滤波，不影响写入的数据
13.  勾选 **【启用转换】**，可切换实时图像的数据单位并自动转换数值（在 **【页面2】** 中可配置通道模态）
14.  点选 **【通道选择】**，可切换要显示的通道
15.  控件栏小组件，控制实时图像显示的播放、暂停、全局、缩放、移除
16.  鼠标悬停可查看各按钮的功能信息
### 5. 如果需要并口打标，需要按照Help指示另外配置驱动文件
- 通过界面上的菜单栏按钮，可以更改界面语言
