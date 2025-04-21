#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *n=new int;
    if(!n)
    {
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else 
    {
        cout<<"\nMemory allocation was successful";
        cout<<"\nEnter integer value:";
        cin>>*n;
        if(*n==0)
        {
            cout<<"\nEntered integer is zero";
        }
        else if(*n>0)
        {
            cout<<"\nEntered integer is +ve";
        }
        else 
        {
            cout<<"\nEntered integer is -ve";
        }
        delete n;
        cout<<"\nMemory deallocated successfully";
    }
    return 0;
}