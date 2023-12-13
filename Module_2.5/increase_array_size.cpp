#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int *b = new int[m];
    for(int i=0;i<m;i++)
    {
        if(i < n)
        {
            b[i] = a[i];
        }
        else
        {
            cin >> b[i];
        }
    }
    delete[] a;
    for(int i=0;i<m;i++)
    {
        cout << b[i] << " ";
    }
    delete[] b;
    return 0;
}