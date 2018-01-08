#include<iostream>
using namespace std;
int main()
{
    int t=0,s=0,n;
    cin>>n;
    t=n;
    while(n>1)
    {
        s=s+(n%2);
        n=n/2;
            }
    cout<<(t+s)+1;
    return 0;
}
