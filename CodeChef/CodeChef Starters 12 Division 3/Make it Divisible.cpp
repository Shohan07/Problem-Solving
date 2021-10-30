#include<bits/stdc++.h>
using namespace std;
 string s ;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1)cout << 3 << "\n";

        else{
        n-=2;
         s = "1";
          while(n--){
             s += "0";
          }
        s+="5";
        cout << s << "\n";
        }

    }
}
