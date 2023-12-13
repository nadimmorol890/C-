#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        int cls;
        double gpa;
        Student(int roll,int cls,double gpa)
        {
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};
int main()
{
    Student rahim(5,9,4.95);
    Student kahim(10,8,4.50);
    cout << rahim.roll <<" "<< rahim.cls <<" "<< rahim.gpa << endl;
    cout << kahim.roll <<" "<< kahim.cls <<" "<< kahim.gpa << endl;
    return 0;
}