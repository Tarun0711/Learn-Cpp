#include <stdio.h >
struct student
{
int rollno;
char *name;
float marks;
};

int main()
{
struct student s1;

s1.rollno=1;
s1.name="Ram";
s1.marks=30.0;
struct student s2 = { 2, "Mohan", 40.5};

printf("Roll No =%d\n",s2.rollno);
printf("Name= %s\n",s2.name);
printf("Marks=%f\n",s2.marks);

return 0;
}