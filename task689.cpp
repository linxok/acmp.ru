#include <iostream>
#include <string>
#include <set>
#include<algorithm>
using namespace std;
const long long maxsize = 9999999999;
string mant(long long i, int j)
{
    long k=0;
    string out = "";     //"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ch[36] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    while (i!=0)
    {
        out.insert (0, ch[i%j]);
        i = i / j;
    }
    return out;
}

int main()
{
    int n, minSizeRez = maxsize, minSizeSetch = maxsize, indMinSizeRez =0, indMinSizeSetch =0;
    set<char>setch;
    string rez[36];
    cin >> n;
    long long *arr = new long long [n];
    for (int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i =0; i<n; i++)
    {
        for (int j=2; j < 36; j++)
        {
            rez[j] = mant(arr[i], j);
            setch.insert(rez[j].begin(),rez[j].end());
            if (rez[j].size() + setch.size() < minSizeRez)
            {
                minSizeRez = rez[j].size()+ setch.size();
                indMinSizeRez = j;
            }
            setch.clear();
        }
        cout << indMinSizeRez << " "<< rez[indMinSizeRez] << endl;
        minSizeRez = minSizeSetch = maxsize;
    }
    return 0;
}
