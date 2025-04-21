//Nesting of member function
#include <iostream>
using namespace std;
class employee
{
    char emp_name[100];
    int emp_id;
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
    public:
    void display()
    {
        input();//Nesting of member functions
        cout<<"\nEmployee information is:";
        cout<<emp_name<<" "<<emp_id<<" "<<emp_salary;
    }
};
int main()
{
    employee obj1;
    obj1.display();
    return 0;
}