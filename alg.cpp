#include<stdio.h>
int main ()
{
	int a[5]={10,20,30,40,50};
	int *p,i;
	p=a;
	printf("%d\n",p);
	printf("%d\n",p+1);
	printf("%d\n",p+2);
	printf("%d\n",p+3);
	printf("%d\n",p+4);
	
	
    printf("%d\n",*p);
	printf("%d\n",*p+1);
	printf("%d\n",*p+2);
	printf("%d\n",*p+3);
	printf("%d\n",*p+4);
	for (i=0;i<5;i++);
	printf("%d\n",*(p+1));
	
	return 0;
}