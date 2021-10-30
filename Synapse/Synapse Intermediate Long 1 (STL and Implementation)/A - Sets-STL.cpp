#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, y, x, i;
    set<int>st;
   // map<int, int>mp;

    cin >> q;

    while(q--){
        cin >> y >> x;
        if(y==1){
            st.insert(x);
           // mp[x]++;
        }
        else if(y==2){
           // mp[x]--;
                st.erase(x);
        }
        else{
            auto it = st.find(x);
            if(it != st.end()) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
