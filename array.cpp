#include <iostream>
using namespace std;
class Array 
{
    int a[5];
    public:
    void input()
    {
        cout<<"\nEnter array elements:";
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    int sum()
    {
        int result=0;
        for(int i=0;i<5;i++)
        {
            result=result+a[i];
        }
        return result;
    }
};
int main()
{
    Array obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        cout<<"\nSum is:"<<obj[i].sum();
    }
    return 0;
}