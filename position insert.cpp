#include <stdio.h>
int main ()
{
	int a[100];
	int n,i,pos,value;
	printf ("enter the number of element ");
	
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf ("enter element ");
		scanf("%d",&a[i]);
	}
	printf ("\n before delete \n");
	for (i=0;i<n;i++)
	printf ("%d",a[i]);
	printf ("enter the position");     scanf ("%d",&pos);
	for (i=pos-1 ; i<=n-1;i++)
	a[i-1]=a[i];
	
	n--;
	printf("\n after delete \n ");
	for (i=0;i<n;i++)
	printf ("%d ",a[i]);
	return 0;
	
}