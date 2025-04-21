#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *a=new int;
    int *b=new int;
    int *temp=new int;
    if(!a||!b||!temp)
    {
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else 
    {
        cout<<"\nMemory allocation was successful";
        cout<<"\nEnter value of a:";
        cin>>*a;
        cout<<"\nEnter value of b:";
        cin>>*b;
        *temp=*a;
        *a=*b;
        *b=*temp;
        cout<<"\nValues after swapping are:"<<*a<<" "<<*b;
        delete a;
        delete b;
        delete temp;
        cout<<"\nMemory deallocated successfully";
    }
    return 0;
}