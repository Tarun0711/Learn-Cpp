#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i;
printf("enter the no of int ");
scanf("%d",&n);
p=(int* )calloc(n*sizeof(int));
if(p==NULL)
{
printf("memory not allocated\n");
exit (1);
}
else
{
printf ("memory allocated ");x
printf ("\n interger value");
for (i=0;i<n;i++)
{
scanf("%d",p+i);
}

for (i=0;i<n;i++)
printf("\n%d",*(p+i));
}
return 0;

}