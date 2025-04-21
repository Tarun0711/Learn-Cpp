#include<iostream>
using namespace std;
class example 
{
    int a[2][2];
    public:
    void input()
    {
        cout<<"\nEnter array elements:";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    int sum()
    {
        int result=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                result=result+a[i][j];
            }
        }
        return result;
    }
};
int main()
{
    example obj[2];
    for(int i=0;i<2;i++)
    {
        obj[i].input();
        cout<<obj[i].sum();
    }
}
