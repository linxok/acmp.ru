#include <iostream>
#include <string>

using namespace std;
int main()
{
   int n, h1,h2,s1,s2,sizes=0;
   string str, str1;
   cin >> n;
   for (int i=0; i<n; i++)
   {
       getline(cin, str);
       sizes = str.size();
       str1 = str.substr(0, sizes- 12);
       h1 = ((str[sizes - 11])-'0') *10 + ((str[sizes - 10])-'0') *60 + ((str[sizes - 8])-'0') *10 + ((str[sizes - 7])-'0');
       h2 = ((str[sizes - 5])-'0') *10 + ((str[sizes - 4])-'0') * 60 + ((str[sizes - 2])-'0') *10 + ((str[sizes - 1])-'0');
       cout << endl <<  str1 << "www" << h1 << "www" << h2;

   }

    return 0;
}
