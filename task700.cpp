#include <iostream>
using namespace std;
double n, p;
int main()
{

    long long N,V,K,S=0,K1=0;

    cin >> N>> V >> K;


    for (int i=0; i<N; i++)
    {
        if (V > K1)
        {
            S+=V-K1;
        }
        K1+=K;
    }
    if (V<K1)
    {
        cout << "NO ";

    }
    else cout << "YES ";
    cout << S;
    return 0;

}
