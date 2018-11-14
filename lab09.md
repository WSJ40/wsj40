# 自顶向下，逐步求精”的编程方法
自顶向下：将复杂的大问题分解为相对简单的小问题，找出每个问题的关键、重点所在，然后用精确的思维定性、定量地去描述问题。其核心本质是”分解”。       

逐步求精：将现实问题经过几次抽象（细化）处理，最后到求解域中只是一些简单的算法描述和算法实现问题。即将系统功能按层次进行分解，每一层不断将功能细化，到最后一层都是功能单一、简单易实现的模块。      
# 洗衣机案例伪代码
begin     

input 水量      

water_in_switch（open）     

if（现水量>=输入水量）    

water_in_switch(close)     

end if     

while(time_counter为4的倍数）     

    if（电机正在左转）     

    motor_run（right）      
  
    else（电机正在右转）      

    motor_run（left）      

    end if      

    if（time_counter()>=一定时间）      

    结束循环      

motor_run(stop)        

water_out_switch(open)       

if(水量不变即水无法排出）      

water_out_switch(close)      

发出警报声     

halt     

else       

继续程序      

end if     

repeat      

    if（水流极小）     

    water_out_switch(close)       

    water_in_switch（open）      

    if（现水量>=输入水量）      

    water_in_switch(close)     

    end if      

    water_out_switch(open)       

    if(水量不变即水无法排出）      

    water_out_switch(close)      

    发出警报声       

    halt       

    else      

    继续程序      

    end if      

until（水的ph值达到干净标准）     

do     

motor_run（left）      

until（水流极小）     

then       

发出警报     

halt     
     
