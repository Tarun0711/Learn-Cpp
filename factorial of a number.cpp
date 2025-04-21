//Prime or composite
#include <iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"\nEnter number:";
    cin>>num;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"\nNumber is composite";
    }
    else 
    {
        cout<<"\nNumber is prime";
    }
    return 0;
}