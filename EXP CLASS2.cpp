#include<iostream>
using namespace std;
class example 
{
    int a[2][2],b[2][2],c[2][2];
    public:
    void input()
    {
        cout<<"\nEnter elements of first matrix:";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"\nEnter elements of second matrix:";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>b[i][j];
            }
        }
    }
    void add()
    {
        cout<<"\nResult of adding two matrices is:";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<" ";
            }
        }
        
    }
};
int main()
{
    example obj[2];
    for(int i=0;i<2;i++)
    {
        obj[i].input();
        obj[i].add();
    }
}

