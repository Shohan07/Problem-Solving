#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while(t--){
        cin >> n;

        set<int> st;
        for(i = 1; i * i <= n; i++){
            st.insert(i*i);
        }
        for(i = 1; i * i * i <= n; i++){
            st.insert(i * i * i);
        }
        cout << st.size() << "\n";
    }
}
