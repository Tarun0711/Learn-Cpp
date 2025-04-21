#include <iostream>
using namespace std;
union employee
{
    char emp_name[100];
    int emp_id;
    float emp_salary;
    void action()
    {
        cout<<"\nEnter employee name:";
        cin>>emp_name;
        cout<<"\nEmployee name is:"<<emp_name;
        cout<<"\nEnter employee id:";
        cin>>emp_id;
        cout<<"\nEmployee id is:"<<emp_id;
        cout<<"\nEnter employee salary:";
        cin>>emp_salary;
        cout<<"\nEmployee salary is:"<<emp_salary;
    }
};
int main()
{
    employee obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].action();
    }
    return 0;
}