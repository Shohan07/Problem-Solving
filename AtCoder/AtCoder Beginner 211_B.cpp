#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set <string>st;
    for(int i = 0; i < 4; i++){
        cin >> s;
        st.insert(s);
    }
  if(st.size() == 4)cout << "Yes\n";
  else cout << "No\n";
}
