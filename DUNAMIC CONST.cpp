#include<iostream>
using namespace std;
class Array
{
private:
int *arr;
int n;
public:
Array();
void show_data();
};
Array::Array()//Dynamic constructor
{
cout<<"\nEnter size:";
cin>>n;
arr=new int[n];
cout<<"\n Enter the elements:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
}
void Array::show_data()
{
for(int i=0;i<n;i++)
{
cout<<" "<<arr[i];
}
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
ptr->show_data();
ptr++;
}
delete [] ptr1;
cout<<"\nMemory deallocated successfully";
return 0;
}