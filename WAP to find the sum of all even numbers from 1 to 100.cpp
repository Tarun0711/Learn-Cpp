//WAP to find the factorial of a number
#include <iostream>
using namespace std;
int main()
{
    long long int fact=1;
    int n;
    cout<<"\nEnter number:";
    cin>>n;
    if(n<0)
    {
        cout<<"\nFactorial could not be computed for negative number";
    }
    else 
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"\nFactorial is:"<<fact;
    }
    return 0;
}