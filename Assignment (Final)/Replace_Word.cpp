#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,x;
        cin >> s >> x;
        int f = s.find(x);
        while(f < s.size())
        {
            s.replace(f,x.size(), "#");
            f = s.find(x);
        }
        cout << s << endl;
    }
    return 0;
}