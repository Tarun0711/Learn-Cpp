//Array of objects[Rectangle(Largest area)]
#include <iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    int area;
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
    int max;
    for(int i=0;i<4;i++)
    {
        obj[i].input();
        cout<<obj[i].calculate();
    }
    max=obj[0].area;
    for(int i=1;i<4;i++)
    {
        if(obj[i].area>max)
        {
            max=obj[i].area;
        }
    }
    cout<<"\nLargest area is:"<<max;
    return 0;
}