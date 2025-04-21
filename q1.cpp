#include <stdio.h>

int main()

{

int n,j=0,i;

float sum=0,avg;
printf ("ënter the no of elements");

scanf("%d",&n); //input for no. of elements in array

int a[n];

for(i=0;i<n;i++)

{
	

scanf("%d",&a[i]); //get the array

if((a[i]%2)!=0)

{

j++; //total no. of odd no's in the array

sum=sum+a[i]; //sum of all odd no's in the array

}

}

avg=sum/j; //array average

printf("%f",avg);

printf("%d",&sum);

return 0;

}