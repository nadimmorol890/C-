#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int t = s.find("EGYPT");
    while(t < s.size())
    {
        s.replace(t, 5, " ");
        t = s.find("EGYPT");
    }
    cout << s;
    return 0;
}