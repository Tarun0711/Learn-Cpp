#include <iostream>
using namespace std;
class example 
{
    public:
    virtual void show()
    {
        cout<<"\nI am in example base";
    }
};
class d1:public example 
{
    public:
    void show()
    {
        cout<<"\nI am in derived d1";
    }
};
class d2:public example 
{
    public:
    void show()
    {
        cout<<"\nI am in derived d2";
    }
};
class d3:public example 
{
    public:
    void show()
    {
        cout<<"\nI am in derived d3";
    }
};

int main()
{
    example *bptr;//Base pointer
    example obj1;
    bptr=&obj1;
    bptr->show();
    d1 obj2;
    bptr=&obj2;
    bptr->show();
    d2 obj3;
    bptr=&obj3;
    bptr->show();
    d3 obj4;
    bptr=&obj4;
    bptr->show();
    return 0;
}

