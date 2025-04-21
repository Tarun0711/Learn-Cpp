//Rollno= 10 Name= John Marks=45.50 dob=30/12/2001
#include<stdio.h>
struct date
{
int dd,mm,yy;
};
struct student
{
int rollno;
char name[30];
float marks;
struct date dob;
};
int main()
{
struct student s;
printf("Enter Rollno: "); scanf("%d",&s.rollno);
printf("Enter Name: "); scanf("%s",&s.name);
printf("Enter Marks: "); scanf("%f",&s.marks);
printf("Enter dob(dd mm yyyy)"); scanf("%d%d%d",&s.dob.dd,&s.dob.mm,&s.dob.yy);

printf("Rollno: %d\n",s.rollno);
printf("Name: %s\n",s.name);
printf("Marks: %f\n",s.marks);
printf("Dob: %d/%d/%d",s.dob.dd,s.dob.mm,s.dob.yy);
return 0;
}