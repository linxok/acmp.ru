#include<iostream>

using namespace std;
int main()
{
    short a[3], b[3], K, W;
    bool bo(0);

    cin >> K >> W;

    for (int i = 0; i < 3; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < 3; i++)
    {
        if (a[i] <= W && b[i] >= K)
            bo = 1;

        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] + a[j] <= W && b[i] + b[j] >= K)
                bo = 1;

            for (int k = j + 1; k < 3; k++)
            {
                if (a[i] + a[j] + a[k] <= W && b[i] + b[j] + b[k] >= K)
                    bo = 1;
            }
        }
    }

    printf("%s", bo ? "YES" : "NO");
    return 0;
}
