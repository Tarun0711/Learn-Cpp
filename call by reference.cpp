
//Single friend function to a class
#include<iostream>
using namespace std;
class sample
{
        int a;
        int b;
        public:
        friend void change(sample&);
                void setvalue()
                {
                        a=45;
                        b=40;
                }
                void display()
                {
                    cout<<endl<<a<<" "<<b;
                }
};
void change(sample &s)
{
        s.a=100;
        s.b=200;
}
int main()
{
        sample X;
        X.setvalue();
        X.display();//Calling display before making any changes
        change(X);
        X.display();//Calling display after making changes
        return 0;

}

