//Array of objects[Finding average salary for the employees]
#include <iostream>
using namespace std;
class employee
{
    char emp_name[100];
    int emp_id;
    public:
    float emp_salary;
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
    float sum=0.0f,avg;
    for(int i=0;i<3;i++)
    {
    obj[i].input();
    obj[i].display();
    sum=sum+obj[i].emp_salary;
    }
    avg=sum/3.0f;
    cout<<"\nAverage of the salary is:"<<avg;
    return 0;
}