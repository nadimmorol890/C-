#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this-> name = name;
            this-> age = age;
        }
};
int main()
{
    Person * nadim = new Person("Nadim Morol",20);
    Person * emon = new Person("Emon Hossen",23);
    // nadim->name = emon->name;
    // nadim->age = emon->age;
    *nadim = *emon;
    delete emon;
    cout << nadim->name <<" "<< nadim->age << endl;
    return 0;
}