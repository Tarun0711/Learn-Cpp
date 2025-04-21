//inline and non-inline member functions
#include <iostream>
using namespace std;
class example
{
    int a,b;
    public:
    void input() //By default inline
    {
        cout<<"\nEnter values of a and b:";
        cin>>a>>b;
    }
    void output();//By default non-inline, but we can make it inline by using inline keyword while defining it
};
inline void example::output()
{
    cout<<a<<" "<<b;
}
int main() 
{
  example obj;
  obj.input();
  obj.output();
   return 0;
}
