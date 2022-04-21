#include<bits/stdc++.h>
 using namespace std;
  string s;

  bool check(int n)
  {
      if(s[n] == '2' || s[n] == '4' || s[n] == '6' || s[n] == '8'){
        return 1;
      }
      else return 0;
  }
 int main()
 {
     int t;


     cin >> t;
     while(t--){
        cin >> s;
        int l = s.length();
        if(check(l-1)){
            cout << 0 << "\n";
            continue;
        }
       else if(check(0)){
        cout << 1 << "\n";
        continue;
       }
       bool f = 1;
        for(int i = 1; i < l; i++){
            if(check(i)){
                cout << 2 << "\n";
                f = 0;
                break;
            }
        }
        if(f) cout << -1 << "\n";
     }
     return 0;
 }
