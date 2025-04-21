#include <stdio.h>

int main()
{
	int a[100]={4,15,6,10,20,68,34,99,80};
	int n=10,i;
	int key ,loc =-1;
	printf("enter the value ");
	scanf ("%d",&key);
	for (i=0;i<n;i++)
	


{
	if (a[i]==key)
	{
		loc =i+1;
		break;
	}
}
if (loc ==-i)
printf("element not found ");
else
printf("found at%d", loc);
return 0;
}
 



