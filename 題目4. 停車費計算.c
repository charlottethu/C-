#include<stdio.h>    
#include<stdlib.h>    
    
int main()    
{    
    int time[4];    
    int i,count,minutes,total;    
    
    for(i=0;i<=3;i++){     
    scanf("%d",&time[i]);    
    }     
    minutes=(time[2]*60+time[3])-(time[0]*60+time[1]);    
         
          
    count=minutes/30;      
    if(count<=4){      
        total=count*30;      
    }      
    else if(count<=8){      
        total=120+(count-4)*40;      
    }      
    else{      
        total=280+(count-8)*60;      
    }      
    printf("%d\n",total);    
}  