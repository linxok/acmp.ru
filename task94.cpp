#include<iostream>

using namespace std;
int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    if (N>=M)
    {
        cout << "1";
    }
    else if (N <= K)
    {
        cout << "NO";
    }
    else
    {

        cout << ((M-N-1)/(N-K)+2);
    }


    return 0;

}
