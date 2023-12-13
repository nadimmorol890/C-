#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int odd_cnt = 0;
        int even_cnt = 0;
        if(n%2==1)
        {
            cout <<"-1" <<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]%2==1)
                {
                    odd_cnt++;
                }
                else
                {
                    even_cnt++;
                }
            }
        if(even_cnt==odd_cnt)
        {
            cout << '0' << endl;
        }
        else if(even_cnt>odd_cnt)
        {
            cout<< even_cnt-(n/2) << endl;
        }
        else if(odd_cnt>even_cnt)
        {
            cout << odd_cnt-(n/2)<< endl;
        }
        }
    }
    return 0;
}