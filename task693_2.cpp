#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), (int (*)(int))tolower);
    transform(b.begin(), b.end(), b.begin(), (int (*)(int))tolower);
    vector<char>veca(a.begin(), a.end());
    vector<char>vecb(b.begin(), b.end());

    sort(veca.begin(),veca.end());
    sort(vecb.begin(),vecb.end());
    if(veca == vecb)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
