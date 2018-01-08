#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a;
    b=a/144;
    a%=144;
    c=a/12;
    a%=12;
    d=a;
    if (d*105>1025)
    {
        c++;
        d=0;
    }
    if (c*1025>11400)
    {
        b++;
        c=0;
    }
    if (11400<c*1025+d*105)
    {
        b++;
        c=0;
        d=0;
    }
    cout<<b<<" "<<c<<" "<<d;
    return 0;
}
