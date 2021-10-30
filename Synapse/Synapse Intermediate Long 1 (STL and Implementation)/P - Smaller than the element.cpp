
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long long>st;
    long long n, i, x;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        if(st.size()==0 || st.lower_bound(x)==st.begin())cout << "-1\n";
        else{
            auto it = st.lower_bound(x);
            it--;
            cout << *it << "\n";
        }
        st.insert(x);
    }

}l.clear();
    s.clear();
