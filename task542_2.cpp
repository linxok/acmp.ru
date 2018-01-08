#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long arr[100], i=0, j,l,o,p=0;
    int n;
    cin>>n;
    while(n>0)
    {
        arr[i]=n%2;
        i++;
        n=n/2;
    }
    o=i;
    for(l=0; l<=i-1; l++)
    {
        o--;
        p=p+(arr[l]*pow(2,o));
    }
    cout<<p;
    return 0;
}
