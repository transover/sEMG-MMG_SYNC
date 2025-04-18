'''
@ Project ：Anaconda PsychoPy
@ File    ：SetParallel.py
@ Author  ：yu hang
@ Date    ：2023/10/27 10:37 
@ Description : 并口设置
------------------------------------------------------------------------------------------------------------------------
    1.动态链接库（dll）（此电脑已配置）
        InpOut32/64 是一个开源的 Windows DLL 和驱动程序，用于直接访问硬件端口（用户级程序的并行和串行端口）
        文件夹名称：“InpOutBinaries_1501.zip” （含有InpOutx64.dll 和 InpOutx32.dll 文件） 下载地址：https://www.highrez.co.uk/Downloads/InpOut32/
        在解压后的文件夹中，首先点击win32文件夹中.exe安装驱动文件，此处是保证inpoutx64.sys 模块已安装。
        另一种方法是将inpoutx64.sys文件下载后，放置到 C：\ windows\system32\driver 文件夹中

        将InpOutBinaries_1501.zip中的inpoutx64.dll、inpout32.h 、inpoutx64.lib 这三个模块（x64 文件夹中）
        复制或移动到目录 C：\ windows\system32\（该路径必须位于Windows系统PATH中）。
        或者将这些文件放在与 PsychoPy 实验文件（具有 .psyexp 文件类型的文件）相同的文件夹中。
    2.并口读取说明：
        检查任务管理器中的LPT驱动是否正常（激活状态，无需接线）
        将所需引脚设置为高(1)或低(0)，注意只有引脚2-9(包括)通常用于数据输出
    3.并口初始化问题
        没有并口时，Psychopy.parallel可以初始化是因为Psychopy.parallel模块会尝试使用其他可用的接口来模拟并口通信，比如使用USB接口或者网络通信等
'''
from psychopy import parallel

if __name__ == '__main__':
    # parallel.setPortAddress(address=0x0378) # 设置端口号
    parallel_port = parallel.ParallelPort(address=0x0378)  # 设置端口号

    # if parallel_port.readPin(7) == 0:
    #     parallel_port.setPin(7, 1)

    # 并口Pin2~Pin9的电平
    parallel_port.setData(3)                   # pins 2 and 3 high
    parallel_port.setData(int("00000011", 2))  # pins 2 and 3 high
    a = bin(parallel_port.readData())
    parallel_port.setPin(2, 1)                 # pins 2 high
    parallel_port.readPin(2)

    pinData = []
    for i in range(2,10):
        a = parallel_port.readPin(i)
        pinData.append(a)
