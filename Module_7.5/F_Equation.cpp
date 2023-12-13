#include<bits/stdc++.h>
using namespace std;
long long int fun(int x,int n)
{
    long long int s = 0;
    
    for(int i=2;i<=n;i+=2)
    {
        s = s+pow(x*1.0,i*1.0);
        
    }
    return s;
}
int main()
{
    int x,n;
    cin >> x >>n;
    long long int ans = fun(x,n);
    cout << ans;
    return 0;
}