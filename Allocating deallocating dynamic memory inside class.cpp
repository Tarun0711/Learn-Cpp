//Allocating/ deallocating dynamic memory inside class
#include <iostream>
#include <stdlib.h>
using namespace std;
class example 
{
    double *ptr,avg=0.0,sum=0.0;
    int size;
    public:
    void input()
    {
        cout<<"\nEnter number of double values to work with:";
        cin>>size;
        ptr=new double[size];
        if(!ptr)
        {
            cout<<"\nMemory allocation failure";
            exit(1);
        }
        else 
        {
            cout<<"\nMemory was successfully allocated";
            cout<<"\nEnter group of double values:";
            for(int i=0;i<size;i++)
            {
                cin>>ptr[i];
            }
        }
    }
        double average()
        {
            for(int i=0;i<size;i++)
            {
                sum=sum+ptr[i];
            }
            avg=sum/size;
            return avg;
        }
    ~example()
    {
        delete []ptr;
        cout<<"\nMemory deallocated successfully";
    }
};
int main()
{
    example obj;
    obj.input();
    cout<<obj.average();
    return 0;
}





