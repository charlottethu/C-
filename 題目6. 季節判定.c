#include<stdio.h>  
#include<stdlib.h>  
int main()  
{  
    int i;  
    scanf("%d",&i);  
    if(i>=3&&i<=5)  
        printf("Spring\n");  
    else if(i>=6&&i<=8)  
        printf("Summer\n");  
    else if(i>=9&&i<=11)  
        printf("Autumn\n");  
    else if(i>=12||i<=2)  
        printf("Winter\n");  
}  