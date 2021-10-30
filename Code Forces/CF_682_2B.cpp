#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;

    cin >> t;
    while(t--){
         int n, b;
        set <int> st;
        bool f = 0;
        cin >> n;
        int p = n;
        while(n--){
            cin >> b;
           // if(st.count(b) == 1) f = 1;

            st.insert(b);
        }
        if(st.size() == p) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
