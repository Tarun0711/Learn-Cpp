#include<stdio.h>
int main()
{
int a[100],n,sum=0,i;
printf("Enter the no of elements");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter the elements");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}