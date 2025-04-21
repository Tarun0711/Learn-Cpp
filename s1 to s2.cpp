#include <stdio.h>
#include <string.h>
int main()
{
	char s1[30];
	char s2[30];
	int l1,l2,i;
	printf("enter 1st string :");   gets (s1);
	printf("enter 2nd string :") ;  gets (s2);
	l1=strlen(s1);
	l2=strlen(s2);
	
	for (i=0; i<l2;i++)
	{
	    s1[l1+i]=s2[i];
    }
    s1[l1+l2]='\o';
    
    printf("%s",s1);
	return 0;
}