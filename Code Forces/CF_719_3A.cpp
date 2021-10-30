#include<bits/stdc++.h>
using namespace std;
void py()
{
    cout << "YES\n" ;
}
void pn()
{
    cout << "NO\n" ;
}
int main()
{
    int t, n, i, j, ans;
    string s;
    set<char>st;

    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        j=0;
        if(n==1) py();
        else{
            for(i=0; i<n; i++){
                    st.insert(s[i]);
                if(i>0){
                    if(s[i] != s[i-1]){
                        j++;
                    }
                }
            else j++;
            }
             if(j == st.size()) py();
              else pn();
           }

     st.clear();
    }
}
