#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;
    // a. roll = 55;
    // a. cgpa = 3.95;
    // char tmp[100] = "Nadim";
    // strcpy(a.name,tmp);
    
    //namer modhhe space na thakle
    // cin >> a.name >> a.roll >> a.cgpa;
    // cin >> b.name >> b.roll >> b.cgpa;

    //namer moddhe space thakle
    cin.getline(a.name,100);
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll >> b.cgpa;

    cout << a.name <<" "<< a.roll <<" "<< a.cgpa <<endl;
    cout << b.name <<" "<< b.roll <<" "<< b.cgpa <<endl;

    return 0;
}