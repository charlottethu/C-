#include <stdlib.h>      
#include <stdio.h>      
#include <math.h>      
      
int main(){      
    int x;      
    scanf("%d",&x);      
    if(x<0){      
        x+=256;      
    }      
    int c[8];      
    for(int i=7;i>=0;i--){      
        c[i]=x/pow(2,i);      
        x%=(int)pow(2,i);      
        printf("%d",c[i]);      
    }      
    printf("\n");      
}  