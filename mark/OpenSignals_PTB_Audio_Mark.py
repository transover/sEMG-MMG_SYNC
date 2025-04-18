'''
@ Project ：Anaconda PTB_Audio_python
@ File    ：OpenSignals_PTB_Audio_Mark.py
@ Author  ：yu hang
@ Date    ：2023/7/31 20:59 
@ Description :  使用OpenSignals记录数据，并标记
------------------------------------------------------------------------------------------------------------------------
    
'''
import matlab.engine
import datetime
if __name__=='__main__':
    eng = matlab.engine.start_matlab()
    initTimeStamp=datetime.datetime.now()
    print('python开始时刻：',initTimeStamp)
    PTB_usetime=eng.PTB_Voice_beep(initTimeStamp.strftime('%Y-%m-%d %H:%M:%S.%f'))  # 执行PTB_Voice_beep 函数
    endTimeStamp = datetime.datetime.now()
    print('python结束时刻：',endTimeStamp)

    print('python用时时间：', endTimeStamp-initTimeStamp)
    print('matlab用时时间：',datetime.timedelta(seconds=PTB_usetime))
    # print('时差：',1000*((endTimeStamp-initTimeStamp)-PTB_usetime),'ms')
    # 0.07881440696655773
    # 0.076789751459728

