#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{   
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        student a,b,c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;
        student bst = a;
        if(b.marks > bst.marks)
        {
            bst = b;
        }
        else if(b.marks == bst.marks)
        {
            if(b.id < bst.id)
            {
                bst = b;
            }
        }
        if(c.marks > bst.marks)
        {
            bst = c;
        }
        else if(c.marks == bst.marks)
        {
            if(c.id < bst.id)
            {
                bst = c;
            }
        }
        cout << bst.id << " " << bst.name << " " << bst.section << " " << bst.marks << endl;
    }
    return 0;
}




