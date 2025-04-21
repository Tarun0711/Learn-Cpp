//Checking whether the entered number is +ve,-ve or zero
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter number:";
    cin>>a;
    if(a>0)
    {
        cout<<"\nGiven number is positive";
    }
    else if(a<0)
    {
        cout<<"\nGiven number is negative";
    }
    else 
    {
        cout<<"\nZero is entered";
    }
    return 0;
}