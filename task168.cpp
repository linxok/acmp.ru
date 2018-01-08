#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1="",s2="";
    cin >> s1;
    for (long long i =0; i< 11000; i++)
    {
        s2 = s2 + to_string(i);
    }
    cout << s2.find(s1);
    return 0;
}
