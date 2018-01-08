#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int sqr(int x)
{
    return x * x;
}
int dist(ii a, ii b)
{
    return sqr(a.first - b.first) + sqr(a.second - b.second);
}
int main()
{
    set<ii> targets = {{0, 0}, {25, 0}, {50, 0}, {75, 0}, {100, 0}};
    ii a;
    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        cin >> a.first >> a.second;
        auto where = find_if(targets.begin(), targets.end(), [a](ii b) -> bool {return dist(a, b) <= 100;});

        if (where != targets.end())
        {
            targets.erase(where);
            count++;
        }
    }
    cout << count;
    return 0;
}
