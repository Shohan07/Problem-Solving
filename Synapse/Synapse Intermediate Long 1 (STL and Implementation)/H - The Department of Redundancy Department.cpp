#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>mp;
    vector<int>v;
    int n;

    while(cin>>n){
        auto it = mp.find(n);
    if(it == mp.end()){
        mp[n]=1;
        v.push_back(n);

    }
    else ++mp[n];
    }

    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " " << mp[v[i]] << "\n";
    }
    return 0;
}
