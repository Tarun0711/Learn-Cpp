#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int n,m,i,key,flag=-1;
cout<<"\n Enter the initial size:";
cin>>n;
int *arr=new int[n];
if(arr==NULL)
{
cout<<"\nMemory allocation failed";
exit(1);
}
cout<<"\nEnter the array elements:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\nEnter element to search:";
cin>>key;
for(i=0;i<n;i++)
{
   if(arr[i]==key)
   {
       flag=i;
       break;
   }
}
if(flag!=-1)
{
    cout<<"\nElement found at index:"<<flag;
}
else 
{
cout<<"\n\n Memory requirement increases:";
cout<<"\nEnter new size(greater than n))";
cin>>m;
int *temp=new int[m];
if(temp==NULL)
{
cout<<"\n\n\nMemory Allocation failed";
exit(1);
}
cout<<"\n\n\n COPYING THE OLD ARRAY";
for(i=0;i<n;i++)
{
temp[i]=arr[i];
}
delete []arr;
arr=temp;
cout<<"\n Enter new values:";
for(i=n;i<m;i++)
{
cin>>arr[i];
}
for(i=n;i<m;i++)
{
   if(arr[i]==key)
   {
       flag=i;
       break;
   }
}
if(flag==-1)
{
    cout<<"\nElement not found";
}
else 
{
    cout<<"\nElement found at index:"<<flag;
}
}
delete [] arr;
return 0;
}

