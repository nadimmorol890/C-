#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string x;
    cin >> x;
    int cnt = 0;
    int t = s.find(x);
    while(t<s.size())
    {
        cnt++;
        t = s.find(x,t+1);
    }
    cout << cnt << endl;
    return 0;
}