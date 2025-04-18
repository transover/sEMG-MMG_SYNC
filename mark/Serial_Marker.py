"""
@ Project ：Anaconda STI_Serial                                                                                                             \n
@ File    ：Serial_Marker.py                                                                                                                              \n
@ Author  ：yu hang                                                                                                                                 \n
@ Date    ：2024/5/8 11:13                                                                                                                         \n
@ Description ：测试串口指令                                                                                                                                    \n
------------------------------------------------------------------------------------------------------------------------
    
"""

import time
from SerialPort.python_SerialPort_Manager import Serial_COM

if __name__ == '__main__':
    Test_COM = Serial_COM(Port='com3', Baudrate=115200, IsShowPort=True, Savepath='Serial_Data.txt')
    Test_COM.start()

    # command = b'00000011'
    command2 = b'00000000' * 1000
    command_list = []
    for i in range(100):
        # command_list.append(command)
        command_list.append(command2)

    time.sleep(2)

    print('开始发送指令')

    for index, command in enumerate(command_list):
        Test_COM.send_serial(command=command)
        print('发送指令{}：{}'.format(index, '低电平'))
        time.sleep(0.5)
    # Test_COM.comRead(x, y, AcquisitionTimeLimit=3, DelayTime=0)  # 采集3s
