#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    int d,k;
    d=1;
    k=1;
    for(int i=2; i<=n; i++)
    {
        ans=(k+d)%10;
        k=d;
        d=ans;
    }
    cout<<ans;
}
