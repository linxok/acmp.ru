#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

string sortN (string N, int K)
{
    bool check = false;
    int i=0;
    while (check)                  //for (int i=K; i<N.size()-1; i++)
    {
        check = true;

        if (i ==0 && N[1] == '0')
        {
             i = (i+1) % N.size();
             continue;
        }
        if (N[i]>N[i+1])
        {
            char temp = N[i];
            N[i] = N[i+1];
            N[i+1] = N[i];
            check = false;
        }
        i = (i+1) % N.size();
    }
    return N;
}
bool comp (int i, int j)
{
    return i>j;
}

int main()
{
    long a=0;
    string A;
    cin >> a;

    A = to_string (a);

    sort (A.begin(), A.end(), comp);
    cout << A << endl;
    //reverse( A.begin(), A.end());
    //cout << A << endl;


    return 0;
}
