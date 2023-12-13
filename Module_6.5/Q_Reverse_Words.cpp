#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int x=0;
    while(ss >> word)
    {
        int i=0, j=word.size()-1;
        while(i<j)
        {
            char tmp = word[i];
            word[i] = word[j];
            word[j] = tmp;
            i++;
            j--;
        }
        if(x==0)
        {
            cout << word;
            x = 1;
        }
        else
        {
            cout << " " << word;
        }
    }
    return 0;
}