#include<stdio.h> 
#include<stdlib.h>

int main()
{

    int *p,i;
    p=(int*)malloc(5*4);
    *p=10;
    *(p+1)=20;
    *(p+2)=30;
    *(p+3)=40;
    *(p+4)=50;
    p=(int*)realloc(p,7*4);
    *(p+5)=60;
    *(p+6)=70;
    for(i=0;i<7;i++)
    printf("%d ",*(p+i));
   return 0;
}