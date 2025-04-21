#include<stdio.h>
int main ()
{
	int a[]={1,2,3,4};
	int *p=a;
	*(p+1)=*(p+2);

		printf("\n%d",a[2]); 
	
	return 0;
}