#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, p;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> p(n+1, 0);
        set<int>st;
        bool f = 0, k = 0;

        for(int i = 1; i <= n; i++){
            cin >> p[i];
            st.insert(p[i]);

            if(f==0){
                    if(!((i%2==1 && p[i]%2==1) || (i%2==0 && p[i]%2==0)))f = 1;
            }
        }
        if(f){
                for(int i = 1 ; i <= n; i++){
                 if(!((i%2==1 && p[i]%2==0) || (i%2==0 && p[i]%2==1))){
                        k = 1;
                        break;
                 }

            }
        }

        if(st.size() == 1){
            cout << "YES\n";

        }
        else if(f == 0 && k == 0){
            cout << "YES1\n";
        }
        else cout << "NO\n";

        st.clear();
    }
}
