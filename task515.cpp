#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    float x=0,y=0,x1=0,y1=0, l=0;
    int n;
    cin >> n;
    for (int i =0; i<n; i++)
    {
        cin >> x1 >> y1;
        l += sqrt( pow( abs(x-x1),2) + pow(abs(y-y1),2) );
        x=x1; y=y1;
    }
    l += sqrt( pow( abs(x),2) + pow(abs(y),2) );
    printf("%0.3f", l);
    return 0;
}
