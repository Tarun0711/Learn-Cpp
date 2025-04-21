#include <stdio.h>
void swap ( int *x, int *y)
{
	int temp;
	*x=*y;
	*y=temp;
	
	
}
int main()
{
	int a=20;
	int b=30;
	printf("before swapping values of a and b are %d,%d\n",a,b);
	swap ( &a , &b);
	printf ("after swapping values a and b are %d,%d\n ",a,b);
	return 0;
	
}