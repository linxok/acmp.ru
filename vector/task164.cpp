#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

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
        s1 = str.substr(0, i);
        s2 = str.substr(i, str.size()-i);
        if (strhash(s1) == strhash(s2))
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
    vector<int> summ;

    summ.push_back(s.begin(), s.end(), tostr);


    copy(summ.begin(),summ.end(), ostream_iterator<int> (cout, " "));

    while (summ.size() >1 )
    {
        auto iter1 = summ.begin();
        int x1 = *iter1;
        int x2= *(iter1+1);
        summ.erase(iter1, iter1+1);
        x1 = x1+x2;
        if (x1 >= 10)
        {
            x2 = x2 % 10;
            x1 = x1 / 10;
            x1 = x1 + x2;
            summ.push_back(x1);
            cout << x1 <<  endl;
        }
        else summ.push_back(x1);

        cout << x1 <<  endl;

    }

    return (int)*summ.begin();
}

int tostr (char i)
{
    return (int) i -48;
}
