#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        char section;
        double math_marks;
        int cls;
        Student(char *name,int roll,char section,double math_marks,int cls)
        {
            strcpy(this->name,name);
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
        }
};
int main()
{
    char a[]={"Rahim"};
    char b[]={"Karim"};
    char c[]={"Fahim"};
    Student s1(a,10,'A',92.5,9);
    Student s2(b,20,'B',91.3,8);
    Student s3(c,30,'C',88.2,7);

    if(s1.math_marks>s2.math_marks && s1.math_marks>s3.math_marks)
    {
        cout << "Rahim" <<" "<< s1.math_marks;
    }
    else if(s2.math_marks>s1.math_marks && s2.math_marks>s3.math_marks)
    {
        cout << "Karim" <<" "<< s2.math_marks;
    }
    else
    {
        cout << "Fahim" <<" "<< s3.math_marks;
    }

    return 0;
}