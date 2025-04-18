%**************************************************************************
%   Subfunction:  no
%   Author:  yuhang
%   Contact:  708842749@qq.com
%   Date Created:  2023.07.26 21:30:32
%   Version:  matlab R2022b
%   Description:  
%               生成序列，number为序列个数
%               intervals为时间间隔
%                
%   History:  
%             
%**************************************************************************
function [stim_number,stim_intervals]=generate_voice_list(number,intervals)
    stim_number = [];
    flag = 0;
    for k=1:number
        if flag ==0
            stim_number = [stim_number, 1, 1];
            flag=1;
        else
            stim_number = [stim_number,2];
            flag=0;
        end
    end        
    stim_intervals = intervals*ones(1,length(stim_number));
end
