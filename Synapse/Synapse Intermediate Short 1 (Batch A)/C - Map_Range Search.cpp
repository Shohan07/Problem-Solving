#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,ll>mp;
int main()
{
    ll q;
    cin >> q;
   while(q--){
    ll a;
    string key;
    cin >> a >> key;
    if(a==0){
        ll v;
        cin >> v;
        mp[key]=v;
    }
    else if(a==1){
        if(mp.count(key)) cout << mp[key] << "\n";
        else cout << "0\n";
    }
    else if(a==2)mp.erase(key);
    else {
        string s;
        cin >> s;
        map<string, ll> :: iterator i1, i2;
        i1 = mp.lower_bound(key);
        i2 = mp.upper_bound(s);
        while(i1!=i2){
           cout<<i1->first<<' '<<i1->second<<endl;
           i1++;
        }
    }
   }

}
