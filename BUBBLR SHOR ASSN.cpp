//Bubble Sort
#include<iostream>
using namespace std;
class array_sorting
{
int a[5];
public:
void getdata()
{
cout<<"\n Enter array elements:"<<endl;
for(int i=0;i<5;i++)
{
cin>>a[i];
}
}
void bubble_sorting()
{
  int pass,hold,i,n=5; // temporary location used to swap array elements
  cout<<"Data items in original order"<<endl;
   for (i=0;i<n;++i)
    {
      cout<<a[i]<<" ";
   } // end for
   // bubble sort
   // loop to control number of passes

   for (int i=0;i<n-1;i++ ) {
    // loop to control number of comparisons per pass
      for (int j=0;j<n-i-1;j++) {
         // compare adjacent elements and swap them if first
         // element is greater than second element
         if (a[j]>a[j+1])
            {
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
            } // end if
      } // end inner for
   } // end outer for

   cout<<"\nData items in ascending order"<<endl;
   for (i=0;i<n;++i)
    {
      cout<<a[i]<<" ";
    } // end for
}
};
int main()
{
    array_sorting obj;
    obj.getdata();
    obj.bubble_sorting();
}