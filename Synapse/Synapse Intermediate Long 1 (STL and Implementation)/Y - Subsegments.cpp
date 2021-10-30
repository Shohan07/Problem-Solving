#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, a[100007];
    map<int, int>mp;
    set<int>st;
    cin >> n >> k;
    for(i=0; i<n; i++){
        cin >> a[i];
        a[i] = -a[i];
    }
    for(i = 0; i<k; i++){
        mp[a[i]]++;
        if(mp[a[i]]==2)st.erase(a[i]);
        else if(mp[a[i]]==1)st.insert(a[i]);
    }
    if(st.size()==0)cout << "Nothing\n";
    else cout << -*(st.begin())<< "\n";

    for(i=k; i<n; i++){
        mp[a[i]]++;
        mp[a[i-k]]--;

        if(mp[a[i]]==2)st.erase(a[i]);
        else if(mp[a[i]]==1)st.insert(a[i]);

         if(mp[a[i-k]]==0)st.erase(a[i-k]);

      if(mp[a[i-k]]==1)st.insert(a[i-k]);


      if(st.size()==0)cout << "Nothing\n";
	  else cout << -*(st.begin()) << "\n";
    }
    return 0;
}
