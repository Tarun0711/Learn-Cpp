//WAP to allocate/ or deallocate memory for one memory location
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    float *ptr=NULL;
    ptr=new float;
    if(!ptr)
    {
        cout<<"\nMemory allocation failure";
        exit(1);
    }
    else 
    {
        cout<<"\nMemory allocation was successful";
        cout<<"\nEnter float value:";
        cin>>*ptr;
        cout<<"\nArea of the circle is:"<<3.14*(*ptr)*(*ptr);
        delete ptr;
        cout<<"\nMemory deallocated successfully";
    }
    return 0;
}