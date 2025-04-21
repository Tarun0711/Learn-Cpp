#include<iostream>
using namespace std;
class a
{
        int x;
        a *next;
        public:
                a()
                {
                        next =NULL;
                }
                void getdata()
                {
                        cout<<"Enter value of x:"<<endl;
                        cin>>x;
                }
                void link(a *t)
                {
                        next=t;
                }
                void print()
                {
                    int sum=0;
                        a *p=this;
                        while(p!=NULL)
                        {
                sum=sum+p->x;
                                p=p->next;
                        }
                        cout<<"\nSum is:"<<sum;
                }
};
int main()
{
        a o1,o2,o3,o4,o5;
        o1.getdata();
        o2.getdata();
        o3.getdata();
        o4.getdata();
        o5.getdata();
        o1.link(&o2);
        o2.link(&o3);
        o3.link(&o4);
        o4.link(&o5);
        o1.print();
        return 0;
}

