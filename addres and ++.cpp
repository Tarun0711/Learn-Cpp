#include<stdio.h>
int main ()
{
	int a[]={1,2,3,4};
	int *p1=a,i;
	int*p2=&a[2];
	p2--;
	*(p2-1)=90;
    p1=p2;
	p1=100;
	for (i=0;i<4;i++);
		printf("%d",a[i]); 
	
	return 0;
}