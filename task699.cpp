#include <iostream>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>

using namespace std;
int main()
{
    int K, R;
    cin >> K >> R;
    int **arr = new int* [K];

    for (int i=0; i<K; i++)
    {
        arr[i] = new int [3];
    }

    for (int i=0; i<K; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    int minInd1 =0, minInd2 =0;
    double minL = 32000, L=0.0, R2=0.0, k=0.0;

    if (K==1)
    {
        for(int i=0; i<R*60; i++)
        {
            k=k+0.016667;
        }
        printf("%.2f K", k-.005);
        return 0;

    }
    for (int i =0; i<K-1; i++)
    {
        for (int j =i+1; j<K; j++)
        {

            L= sqrt( pow( abs(arr[i][0] - arr[j][0]),2) + pow ( abs (arr[i][1] - arr[j][1]),2 ));
            R2 = arr[i][2] + arr[j][2];
            if (minL > (L-R2))
            {
                minL  = L - R2;
                minInd1 = i;
                minInd2 = j;


            }

        }
    }
    L = L-R2;
    if ((L)<=0 )
    {
        printf("%.2f", k);
        return 0;
    }
    for (int i =0; i<R*60; i++)
    {
        if ((L-k*2)<=0 )
        {
            printf("%.2f", k-.005);
            return 0;
        }

        k = k + 0.016667;

    }
    printf("%.2f", k-.005);

    return 0;
}
