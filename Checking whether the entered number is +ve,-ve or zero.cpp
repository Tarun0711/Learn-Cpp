//WAP to find the sum of all even numbers from 1 to 100
#include <iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    while(i<=100)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"\nSum is:"<<sum;
    return 0;
}