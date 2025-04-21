//Allocating/ deallocating array of memory locations
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int size,rev=0,digit;
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
        for(int i=0;i<size;i++)
        {
            if(ptr[i]%5==0)
            {
                cout<<"\nReversed multiples of 5 elements are:";
                while(ptr[i]!=0)
                {
                    digit=ptr[i]%10;
                    rev=rev*10+digit;
                    ptr[i]=ptr[i]/10;
                }
                cout<<rev<<" ";
            }
        }
        delete [] ptr;
        cout<<"\nMemory deallocated successfully";
    }
    return 0;
}