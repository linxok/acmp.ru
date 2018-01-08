#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n,k;
    double l;
    string s;
    pair<double,string> temppar;
    cin >> n ;
    vector<pair<double, string>> par;
    for(int i=0; i<n; i++)
    {
        cin >> k;
        for(int j=0; j<k; j++)
        {
            cin >> temppar.first >> temppar.second;
            par.push_back(temppar);
        }
    }
    sort(par.rbegin(),par.rend());
    cout << par.size() << endl;
    for (int i=0 ; i< par.size(); i++)
    {
        temppar = par[i];
        cout << fixed;
        cout.precision(2);
        cout  << temppar.first << " " << temppar.second << endl;
    }
    return 0;
}
