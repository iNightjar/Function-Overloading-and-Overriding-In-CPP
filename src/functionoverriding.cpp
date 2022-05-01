#include <bits/stdc++.h>
using namespace std;
// functionoverridding

class person{
public:
    void print()
    {
        cout<<"gender: male or female "<<endl;
    }
};
class man : public person{
public :
    void print()
    {
        cout<<"gender: male "<<endl;
    }
};
class woman : public person{
public :
    void print()
    {
        cout<<"gender: female "<<endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    person  p;
    p.print();
    man  m;
    m.print();
    woman w;
    w.print();
}
