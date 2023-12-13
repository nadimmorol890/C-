#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Hello";
    // string b = "World";
    
    // a += b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;
    
    // a = "HelloA";         //work
    // a = a+"A";            //work
    // a[5] = 'A';           //did't work
    // a.push_back('A');   //work
    // a.pop_back();
    // cout << a << endl;

    // a = "Gelo";
    // //a.assign("Gelo");
    // cout << a << endl;

    string a = "HelloWorld";
    //a.erase(4,1);
    a.replace(5,0,"so");
    //a.insert(5,"Nadim");
    cout << a << endl;
    return 0;
}