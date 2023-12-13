#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        int flag = 0;
        for(int i=0;i<n-2;i++)
        {
            int sum = s - ar[i];
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(ar[j]+ar[k] == sum)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}