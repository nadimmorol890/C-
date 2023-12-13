#include <iostream>
#include <algorithm>     //for min and max
#include <utility>       //for swap
using namespace std;

int main()
{
    // //Min_Max
    // int a,b,c,d;
    // cin >> a >> b >> c >> d;
    // int mn = min({a,b,c,d});
    // int mx = max({a,b,c,d});
    // cout << mn << " " << mx;

    int a,b;
    cin >> a >> b;
    swap(a,b);
    cout << a << " " << b;
    return 0;
}