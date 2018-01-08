#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, nn, x, y;
    cin >> n;
    nn = n*n;
    //int v [nn][nn]= {{0},0};
    int **v = new int*[nn];

    for (int i = 0; i< nn; i++)
    {
        v[i] = new int [nn];

        for (int j=0; j<nn; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int x = 0; x < nn; x += n)
    {
        for (int y = 0; y < nn; y += n)
        {
            vector <char> used(nn+1, false);
            for (int i = x; i < x + n; i++)
            {
                for (int j = y; j < y + n; j++)
                {
                    if (v[i][j] > nn || v[i][j] < 1 || used[v[i][j]])
                    {
                        cout << "Incorrect";
                        return 0;
                    }
                    used[v[i][j]] = true;
                }
            }
        }
    }
    set<int>sint;
    for (int i=0; i<nn; i++)
    {
        sint.clear();
        for (int j=0; j<nn; j++)
        {
            sint.insert(v[i][j]);
        }
        if (sint.size() < nn)
        {
            cout << "Incorrect";
            return 0;
        }
    }
    for (int i=0; i<nn; i++)
    {
        sint.clear();
        for (int j=0; j<nn; j++)
        {
            sint.insert(v[j][i]);
        }
        if (sint.size() < nn)
        {
            cout << "Incorrect";
            return 0;
        }
    }

    cout << "Correct";

    return 0;
}
