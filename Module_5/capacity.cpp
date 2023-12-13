#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello World";
    // cout << s << endl;
    // cout << s.size() << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;

    // string s = "Nadim";
    // //s.clear();
    // if(s.empty()==true) cout << "Empty" << endl;
    // else cout << "Not Empty" << endl;

    string s;
    cin >> s;
    s.resize(5);
    s.resize(8,'X');
    cout << s.size() << endl;
    cout << s << endl;

    return 0;
}