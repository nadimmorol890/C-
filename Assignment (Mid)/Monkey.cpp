#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[100005];
    while(cin.getline(ar,100005))
    {
        int n = strlen(ar);
        sort(ar,ar+n);
        for(int i=0;i<n;i++)
        {
            if(ar[i] != ' ')
            {
                cout << ar[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}