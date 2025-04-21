#include<stdio.h>
int main()
{
int a[100][100],r,c,i,j,trans[100][100];
printf("Enter no of row and column "); scanf("%d%d",&r,&c);

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter value "); scanf("%d",&a[i][j]);
}
}
printf("\nEntered Marix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%3d ",a[i][j]);
}
printf("\n");
}

for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
trans[i][j]=a[j][i];
}
}

printf("\nTranspose Matrix\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%3d",trans[i][j]);
}
printf("\n");
}

return 0;
}
