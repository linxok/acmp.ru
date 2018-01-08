#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int strhash(string s);
int tostr (char i);
int main()
{
    string str, s1, s2;
    cin >> str;
    if (str.size()== 1)
    {
        cout << "NO";
        return 0;
    }
    for (int i =1; i<str.size(); i++)
    {
        s1 = strhash( str.substr(0, i));
        s2 = strhash( str.substr(i, str.size()-i));
        if (s1 == s2)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
int strhash(string s)
{
    transform(s.begin(), s.end(), s.begin(), (int(*) (int)) tostr);
    vector<int> summ (s.begin(), s.end());
    int x1=0, x2=0;
    while (summ.size() >1 )
    {

        x1 = summ.back();
        summ.pop_back();
        x2 = summ.back();
        summ.pop_back();
        x1 = x1+x2;
        if (x1 >= 10)
        {
            x2 = x1 % 10;
            x1 = x1 / 10;
            summ.push_back(x1);
            summ.push_back(x2);
        }
        else summ.push_back(x1);
    }
    return (int)*summ.begin();
}
int tostr (char i)
{
    return (int) i -48;
}
