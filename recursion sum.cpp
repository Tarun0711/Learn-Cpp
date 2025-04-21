#include <iostream>
using namespace std;
class recursion 
{
    int x;
    public:
    int value()
    {
        cout<<"\nEnter x:";
        cin>>x;
        return x;
    }
    int sum(int a)
    {
        if(a<1)
        return 0;
        else 
        return a+sum(a-1);
    }
};
int main()
{
    recursion obj;
    int n=obj.value();
    cout<<"\nSum of all integers from 1 to "<<n<<" is:"<<obj.sum(n);
    return 0;
}