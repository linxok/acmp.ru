#include <iostream>
using namespace std;
int main()
{
    int X,Y,Z,W,sum=0;
    cin >>X>>Y>>Z>>W;
    int x1,y1,z1;
    x1 = W/X;
    y1= W/Y;

    for (int i=0; i<=x1; i++)
    {
        for (int j=0; j<=y1; j++)
        {
            int n = W - (X*i) - (Y*j);

            if (!(n%Z))
            {
                sum++;
            }

        }
    }
    cout << sum;
    return 0;
}
