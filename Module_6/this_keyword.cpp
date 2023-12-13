#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            //(*this).name = name;
            this->name = name;
            //(*this).age = age;
            this->age = age;
        }
        void hello()
        {
            cout << "Hello" << endl;
        }
};
int main()
{
    Person nadim("Nadim Morol",20);
    cout << nadim.name <<" "<< nadim.age << endl;
    return 0;
}