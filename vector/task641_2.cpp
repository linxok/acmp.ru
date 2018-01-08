#include <bits/stdc++.h>
using namespace std;
int toint (int i)
{
    return (i-48);
}

int vecfind (vector<int> &vec)
{
    auto it = vec.begin();
    while (it!=vec.end()-1)
    {
        if ((*it) < (*(it+1)))
        {
            int tempIt = *it;
            vec.erase(it);
            vec.push_back(tempIt);
            break;
        }
        it++;
    }
    return 0;
}
int main()
{
    string s;
    int a, b;
    cin>>s;
    transform(s.begin(),s.end(), s.begin(), (int (*) (int))toint );
    vector<int>vec(s.begin(), s.end());
    vecfind(vec);
    vecfind(vec);
    copy(vec.begin(),vec.end()-2, ostream_iterator<int>(cout, ""));
    return 0;
}
