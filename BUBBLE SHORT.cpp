//Binary search implementation
#include<iostream>
using namespace std;
class array_searching
{
int a[5],key;
public:
void input()
{
cout<<"\n Enter array elements:"<<endl;
for(int i=0;i<5;i++)
{
cin>>a[i];
}
cout<<"(Binary Search)Enter integer value to search in sorted array:"<<endl;
cin>>key;
}
int binary_search()
{
  int index=-1,beg=0,end=4,mid;
  
   while(beg<=end)
   {
    mid=(beg+end)/2; // determine middle element
    if(a[mid]==key)
    {
      index=mid; //save the location of element.
      break;
    }
    else if(a[mid]>key) //key less than middle element
    {
      end=mid-1;
    }
    else if(a[mid]<key) //key greater than middle element
    {
      beg=mid+1;
    } //end of if else
   } //end of while
   return index;
}
};
int main()
{
    int result;
    array_searching obj1;
    obj1.input();
    result=obj1.binary_search();
    if(result==-1)
    cout<<"\nElement not found";
    else 
    cout<<"\nElement is found at index: "<<result<<" at exact position: "<<result+1;
}