#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  int c = 0;
  cin >> s;
  int l = s.length();
  char ch = s[0];

  for(int i = 1; i < l; i++){
      if(s[i] != ch){
        if(ch == '0')c++;
        ch = s[i];
      }
      if(c > 1){
        c = 2;
        break;
      }
  }
  if(c < 2 && ch == '0')c++;

   cout << c  << "\n";
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}

