#include <iostream>
#include <string>
using namespace std;
int main()
{/*
   string s;
   cin >> s;
   for(int i=0; i<s.size()-2; i++)
   {
       if ( (!isupper(s[i-1])) &&
               ((isupper(s[i]) && islower(s[i+1]) && (!islower(s[i+2])))
            || (isupper(s[i]) && islower(s[i+1]) && islower(s[i+2]) && (!islower(s[i+3])))
            || (isupper(s[i]) && islower(s[i+1]) && islower(s[i+2]) && islower(s[i+3]) && (!islower(s[i+4]))))
           )
       {
           cout << "Yes";
           return 0;
       }
   }
   cout << "No";
    return 0;
}
