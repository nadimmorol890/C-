#include<bits/stdc++.h>
using namespace std;
namespace Nadim
{
    int age = 20;
    void hello()
    {
        cout <<"Nadim namespace" << endl;
    }
}
namespace Emon
{
    int age2 = 24;
    void hello2()
    {
        cout <<"Emon namespace" << endl;
    }
}
using namespace Nadim;
int main()
{
    cout << age << endl;
    cout << Emon::age2 << endl;
    hello();
    Emon::hello2();
    return 0;
}