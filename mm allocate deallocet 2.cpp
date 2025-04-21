//Allocating/ deallocating array of memory locations
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int size;
    cout<<"\nEnter number of integer values to work with:";
    cin>>size;
    int *ptr=new int[size];
    if(!ptr)
    {
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else 
    {
        cout<<"\nMemory allocation was successful";
        cout<<"\nEnter array values:";
        for(int i=0;i<size;i++)
        {
            cin>>*(ptr+i);
        }
        cout<<"\nEntered values are:";
        for(int i=0;i<size;i++)
        {
            cout<<*(ptr+i)<<" ";
        }
        delete [] ptr;
        cout<<"\nMemory deallocated successfully";
    }
    return 0;
}