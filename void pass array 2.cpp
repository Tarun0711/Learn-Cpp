#include <stdio.h>
void fun(int x[],int n);
int main()
{
	int a[5]={10,20,30,40,50};
	  int i; 
	   fun(a,5);
	   	
	for (i=0;i<5;i++)
	printf("%d"  ,a[i]);
	return 0;
	
}
void fun(int x[], int n)
{
		int i;
	for (i=0;i<5;i++)
     x[i]=x[i]*x[i];


}