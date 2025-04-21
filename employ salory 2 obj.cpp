//Array of objects
#include <iostream>
using namespace std;
class employee
{
    char emp_name[100];
    int emp_id;
    float emp_salary;
    public:
    void input()
    {
        cout<<"\nEnter employee name:";
        cin>>emp_name;
        cout<<"\nEnter employee id:";
        cin>>emp_id;
        cout<<"\nEnter employee salary:";
        cin>>emp_salary;
    }
    void display()
    {
        cout<<"\nEmployee information is:";
        cout<<emp_name<<" "<<emp_id<<" "<<emp_salary;
    }
};
int main()
{
    employee obj[3];
    for(int i=0;i<3;i++)
    {
    obj[i].input();
    obj[i].display();
    }
    return 0;
}