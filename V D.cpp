#include<iostream>
using namespace std;
class Array
{
private:
double *arr;
int n;
public:
Array();
void task();
};
Array::Array()//Dynamic constructor
{
cout<<"\nEnter size:";
cin>>n;
arr=new double[n];
cout<<"\n Enter the elements:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
}
void Array::task()
{
double sum=0.0,avg=0.0;
for(int i=0;i<n;i++)
{
sum=sum+arr[i];
}
avg=sum/n;
cout<<"\nAverage is:"<<avg;
}
int main()
{
int no_object;
cout<<"\n Enter no. of objects:";
cin>>no_object;
Array *ptr=new Array[no_object];
Array *ptr1=ptr;
for(int i=0;i<no_object;i++)
{
ptr->task();
ptr++;
}
delete [] ptr1;
cout<<"\nMemory deallocated successfully";
return 0;
}
