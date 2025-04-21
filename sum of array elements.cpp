#include<iostream>
using namespace std;

int main()
{
int a[100],n,i,sum=0,average;
int*p=a;
cout<<"enter the value of numbers";
cin>>n;

cout<<"enter the elements";
for(int i=0; i<n; i++)
{
cin<<(p+i);
sum+=*(p+1)
}

cout<<"sum of array elements is"<<sum<<endl;

cout<<"average is"<<sum/n;


return 0;
}