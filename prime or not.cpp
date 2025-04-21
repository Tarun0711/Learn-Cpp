#include<iostream>
using namespace std;
int main()
{
        int n,flag=0;
        cout<<"\nEnter number:";
        cin>>n;
        try
        {
            for(int i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                throw n;
            }
            else
            {
                cout<<"\nNumber input was non-prime, hence no problem occured";
            }
        }
        catch(int x)
        {
            cout<<"\nException caught: Number is prime and its value is:"<<x;
        }
        return 0;
}
