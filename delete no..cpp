#include <stdio.h>
void print (int*);
int main()

{
	int ar[]={10,20,30,};
	print (ar+1);
}
void print (int *p)
{
printf("%d",*p);
}
 