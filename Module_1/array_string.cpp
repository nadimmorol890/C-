#include <iostream>
#include <string.h>   //for c string
#include <string>     //for c++ string
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    getchar();
    // int ar[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin >> ar[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout << ar[i] << endl;
    // }

    // char s[100];
    // cin >> s;
    // cout << strlen(s) << endl;

    char s[100];
    //fgets(s,100,stdin);
    cin.getline(s,100);
    cout << s << endl;
    
    return 0;
}