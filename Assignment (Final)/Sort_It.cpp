#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int sum;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].sum = a[i].math_marks + a[i].eng_marks;
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i].sum < a[j].sum || (a[i].sum == a[j].sum && a[i].id > a[j].id))
            {
                swap(a[i],a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}
