#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	char s2[30];
	char s3[30]="abc";
	printf ("enter the first string ");gets (s1);
	printf ("enter the scnd string ");gets (s2);

	strcat(s2,s1);
	strncat(s3,s1 ,3);
	
	printf("s1=%s\n",s1);
	printf("s3=%s\n",s3);
	return 0;
	
}