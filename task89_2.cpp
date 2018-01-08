#include <iostream>//Accepted
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int m, m2, m3 = 0, min = 1441, k, i, i2,n;
    string tr[101];
    cin >> k;
    for (i = 0; i <= k; i++)
    {
        getline(cin, tr[i]);
    }
    for (i = 1; i <= k; i++)
    {
        for (i2 = 0; tr[i][i2 + 1] != '\"' || tr[i][i2 + 2] != ' '; i2++);
        i2+=2;
        m = ((tr[i][i2 + 1] - 48) * 10 + tr[i][i2 + 2] - 48) * 60 + (tr[i][i2 + 4] - 48) * 10 + tr[i][i2 + 5] - 48;
        m2 = ((tr[i][i2 + 7] - 48) * 10 + tr[i][i2 + 8] - 48) * 60 + (tr[i][i2 + 10] - 48) * 10 + tr[i][i2 + 11] - 48;
        do
        {
            m++;
            if (m == 1440)
            {
                m = 0;
            }
            m3++;
        }
        while (m != m2);
        if (m3 < min)
        {
            min = m3;
            n = i;
        }
        m3 = 0;
        i2 = 0;
    }
    cout << "The fastest train is \"";
    for (i2 = 1; tr[n][i2] != '\"'; i2++)
    {
        cout << tr[n][i2];
    }
    cout << "\".\nIt's speed is " << llrint(650.0 / (min / 60.0)) << " km/h, approximately.\n";
}
