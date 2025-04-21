#include<iostream>
#include<stdlib.h>
using namespace std;
class example
{
int *p,n;
public:
void input()
{
 cout<<"\nEnter size of array:";
 cin>>n;
 p=new int[n];
 if(p==NULL)
 {
     cout<<"\nMemory allocation failure";
     exit(1);
 }
 else 
 {
     cout<<"\nMemory allocated successfully";
     cout<<"\nEnter array elements:";
     for(int i=0;i<n;i++)
     {
         cin>>p[i];
     }
 }
}
void task()
{
int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+p[i];
}
cout<<"\nSum is:"<<sum;
}
~example()
{
    delete[] p;
    cout<<"\nMemory deallocated successfully";
}
};
int main()
{
int m;
cout<<"\n Enter number of objects:";
cin>>m;
example *p=new example[m];
example *d=p;
if(p==NULL)
{
cout<<"\n Memory allocation failure";
exit(1);
}
else 
{
    cout<<"\nMemory allocated successfully for array of objects";
for(int i=0;i<m;i++)
{
p->input();
p->task();
p++;
}
delete[]d;
cout<<"\Memory deallocated for array of objects";
}
return 0;
}


