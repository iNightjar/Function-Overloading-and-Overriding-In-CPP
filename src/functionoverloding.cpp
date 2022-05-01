#include <bits/stdc++.h>
using namespace std;
// function overloading
void print(int a)
{
    cout<<"integer func "<<a<<endl;
}
void print(char a)
{
    cout<<"char func "<<a<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    print(1);
    print('a');
}