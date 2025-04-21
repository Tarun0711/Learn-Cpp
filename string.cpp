#include<stdio.h>
int main()
{
	char str1[20],str2[10],n;
	int x,n;
	printf("\n Enter first string:");
	gets(str1);
	printf("\n Enter second string:");
	gets(str2);
	printf("\n Enter no. of characters to compare:");
	scanf("%d",&n);
	x=strncmp(str1,str2,n);
	if(x==0)
	{
		printf("\n Strings are equal");
	}
	else if(x>0)
	{
		printf("\n First string is greater than second string(strings are not equal)");
	}
	else
	{
		printf("\n First string is less than second string(strings are not equal)");
	}
	return 0;
}
