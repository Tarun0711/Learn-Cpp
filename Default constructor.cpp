//Default constructor
#include<iostream>
using namespace std;
class abc_default
{
    int x,y;
    public:
    abc_default()
    {
        cout<<"\nEnter values of x and y:";
        cin>>x>>y;
        cout<<"\n Data members are initialized";
    }
    void display()
    {

        cout<<"\n Values of x and y are:"<<x<<" "<<y;
    }

};
int main()
{
    abc_default obj1,obj2;
    obj1.display();
    obj2.display();
    return 0;
}