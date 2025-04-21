//Array of objects[Rectangle]
#include <iostream>
using namespace std;
class rectangle
{
    int length,breadth,area;
    public:
    void input()
    {
        cout<<"\nEnter length";
        cin>>length;
        cout<<"\nEnter breadth";
        cin>>breadth;
    }
    int calculate()
    {
        area=length*breadth;
        return area;
    }
};
int main()
{
    rectangle obj[4];
    for(int i=0;i<4;i++)
    {
        obj[i].input();
        cout<<obj[i].calculate();
    }
    return 0;
}