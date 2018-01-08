#include<iostream>
using namespace std;
int main()
{
    long long int a,b,n;
    cin>>a>>b;
    while(a!=0&&b!=0)
    {
        if (a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }
    }

    for(int i=1; i<=a+b; i++)
    {
        cout<<1;
    }
//system("pause");
    return 0;
}
