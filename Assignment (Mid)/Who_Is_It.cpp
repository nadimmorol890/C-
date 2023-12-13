#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        char name[100];
        char section;
        int total_marks;

};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        Student a,b,c;
        cin >> a.id >> a.name >> a.section >> a.total_marks;
        cin >> b.id >> b.name >> b.section >> b.total_marks;
        cin >> c.id >> c.name >> c.section >> c.total_marks;

        if((a.total_marks) > (b.total_marks) && (a.total_marks) > (c.total_marks))
        {
            cout << a.id <<" "<< a.name <<" "<< a.section <<" "<< a.total_marks <<endl;
        }
        else if((b.total_marks) > (a.total_marks) && (b.total_marks) > (c.total_marks))
        {
            cout << b.id <<" "<< b.name <<" "<< b.section <<" "<< b.total_marks <<endl;
        }
        else if((c.total_marks) > (a.total_marks) && (c.total_marks) > (b.total_marks))
        {
            cout << c.id <<" "<< c.name <<" "<< c.section <<" "<< c.total_marks <<endl;
        }
        else if ((a.total_marks == b.total_marks) && (b.total_marks == c.total_marks))
        {
            if((a.id) < (b.id) && (a.id) < (c.id))
            {
                cout << a.id <<" "<< a.name <<" "<< a.section <<" "<< a.total_marks <<endl;
            }
            else if((b.id) < (a.id) && (b.id) < (c.id))
            {
                cout << b.id <<" "<< b.name <<" "<< b.section <<" "<< b.total_marks <<endl;
            }
            else if((c.id) < (a.id) && (c.id) < (b.id))
            {
                cout << c.id <<" "<< c.name <<" "<< c.section <<" "<< c.total_marks <<endl;
            }
        }
        else if((a.total_marks) == (b.total_marks))
        {
            if((a.id) < (b.id))
            {
                cout << a.id <<" "<< a.name <<" "<< a.section <<" "<< a.total_marks <<endl;
            }
            else if((b.id) < (a.id))
            {
                cout << b.id <<" "<< b.name <<" "<< b.section <<" "<< b.total_marks <<endl;
            }
        }
        else if((a.total_marks) == (c.total_marks))
        {
            if((a.id) < (c.id))
            {
                cout << a.id <<" "<< a.name <<" "<< a.section <<" "<< a.total_marks <<endl;
            }
            else if((c.id) < (a.id))
            {
                cout << c.id <<" "<< c.name <<" "<< c.section <<" "<< c.total_marks <<endl;
            }
        }
        else if((b.total_marks) == (c.total_marks))
        {
            if((b.id) < (c.id))
            {
                cout << b.id <<" "<< b.name <<" "<< b.section <<" "<< b.total_marks <<endl;
            }
            else if((c.id) < (b.id))
            {
                cout << c.id <<" "<< c.name <<" "<< c.section <<" "<< c.total_marks <<endl;
            }
        }
    }
    return 0;
}