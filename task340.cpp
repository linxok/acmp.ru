#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int>a;
    vector<int>b;
    int k;
    for (int i=0; i<3; i++)
    {
        cin >> k;
        a.push_back(k);
    }
    for (int i=0; i<3; i++)
    {
        cin >> k;
        b.push_back(k);
    }
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    if (a == b)
        cout <<"Boxes are equal";
    else if (a[0] <= b[0] && a[1] <= b[1] && a[2] <= b[2])
        cout <<"The first box is smaller than the second one";
    else if (a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2])
        cout <<"The first box is larger than the second one";
    else
        cout <<"Boxes are incomparable";
    return 0;
}
