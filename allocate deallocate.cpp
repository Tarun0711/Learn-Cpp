//WAP to allocate/ or deallocate memory for one memory location
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *ptr=NULL;
    ptr=new int;
    if(!ptr)
    {
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else 
    {
        cout<<"\nMemory allocation was successful";
        cout<<"\nEnter integer value:";
        cin>>*ptr;
        cout<<"\nSquare of integer value is:"<<(*ptr)*(*ptr);
        delete ptr;
        cout<<"\nMemory deallocated successfully";
    }
    return 0;
    
}
