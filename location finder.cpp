#include <stdio.h>

int main()
{
	int a[100]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	int key ,loc =-1;
	int beg=0,end =n-1 ,mid ;
	printf("enter the value ");
	scanf ("%d",&key);
	while (beg<=end )
	
	


{
	mid =(beg+end)/2;
	if (a[mid]==key)
	
	
	{
		loc =mid +1;
		break;
	}
	else if (a [mid ]>key)
	end =mid-1;
	else 
	beg= mid+1 ;
	
}
if (loc ==-1)
printf("element not found ");
else
printf("found at%d", loc);
return 0;
}
 



