#include<iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if(x >= '0' && x <= '9')
    {
        cout << ("IS DIGIT\n");
    }
    else if((x>='a' && x<='z') || (x>='A' && x<='Z'))
    {
        cout << ("ALPHA\n");
        
        if(x>='a' && x<='z')
        {
            cout << ("IS SMALL\n");
        }
        else
        {
            cout << ("IS CAPITAL\n");
        }
    }
    return 0;
}