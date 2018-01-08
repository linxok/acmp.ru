#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if (a>1)
    {
        if (a%2==0)
        {
            cout<<a/2;
        }
        else
        {
            cout<<a;
        }
    }
    else
    {
        cout<<0;
    }
    return 0;
}
