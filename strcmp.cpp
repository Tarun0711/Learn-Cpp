#include<stdio.h>
#include<string.h>
int main()
{
char s1[30]="ABCD123";
char s2[30]="ABXYZ";
char s3[30]="abcd123";

int x,y,z,w;

x=strcmp(s1,s2); // x= -1
y=strncmp(s1,s2,2); // y= 0
z=strcmp(s1,s3); // z= -1
w=stricmp(s1,s3); // w= 0

printf("%d %d %d %d",x,y,x,w);

return 0;
}