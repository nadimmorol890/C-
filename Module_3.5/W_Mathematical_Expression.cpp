#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    int ans1 = a * b;
    int ans2 = a + b;
    int ans3 = a - b;
    if((s=='+') && (q=='=') && ((a+b)==c)||
       (s=='-') && (q=='=') && ((a-b)==c)||
       (s=='*') && (q=='=') && ((a*b)==c))
    {
        cout << "Yes";
    }
    else if(s=='*')
    {
        cout << ans1;
    }
     else if(s=='+')
    {
        cout << ans2;
    }
     else if(s=='-')
    {
        cout << ans3;
    }
    return 0;
}