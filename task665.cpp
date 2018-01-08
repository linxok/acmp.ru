#include<iostream>
using namespace std;
char b1;
int a, b;
int main()
{
    cin >> a >> b1 >> b ;
    b=b+1;
    while(a%10!=b/10 || a/10!=b%10)
    {
        if(b<60)
        {
            b++;
        }
        else
        {
            b=0;
            a++;
            if(a==24)
            {
                a=0;
                b=0;
            }
        }
    };
    cout << a/10 << a%10 << b1 << b/10 << b%10;
}
