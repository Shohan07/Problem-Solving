#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int i, l, f=0;

   cin >> s;
   l = s.length();
   for(i = 0; i < l; i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        cout << "YES" << endl;
        f=1;
        break;
    }
   }
   if(!f) cout << "NO" << endl;
return 0;
}
