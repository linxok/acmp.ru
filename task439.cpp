
#include <iostream>
    using namespace std;
    double n, p;
    int main()
    {
        double ans = 0.0;
        cin>>n>>p;
        ans = (100 * n) / ((n - 1) * p + 100);
        printf("%.9lf", ans);
        return 0;
    }
