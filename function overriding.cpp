#include<iostream>
using namespace std;

class A
{
public:
void show()
{
cout<<"This is the base class A"<<endl;
}
};

class B: public A
{
public:
void show()
{
cout<<"This is the derived class B"<<endl;
}
};

class C: public B
{
public:
void show()
{
cout<<"This is the derived class C"<<endl;
}
};

class D: public C
{
public:
void show()
{
cout<<"This is the derived class D"<<endl;
}
};

int main()
{
D obj1;
obj1.show();
return 0;
}