#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string nm,int ag,int m1,int m2)
        {
            name = nm;
            age = ag;
            mark1 = m1;
            mark2 = m2;
        }
        void hello()
        {
            cout << name << " " << age << endl;
        }
        int total_marks()
        {
            return mark1+mark2;
        }
};
int main()
{
    Person nadim("Nadim Morol",20,90,80);
    //cout << nadim.name <<" "<< nadim.age << endl;   
    nadim.hello();
    cout << nadim.total_marks(); 
    return 0;
}