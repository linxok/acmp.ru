#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int i=0;
    while (a[i])
    {
        a[i]= toupper(a[i++]);
    }
    i=0;
    while (b[i])
    {
        b[i]= toupper(b[i++]);
    }

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
