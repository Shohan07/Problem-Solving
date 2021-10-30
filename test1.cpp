#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;

    mp[1]++;
    mp[2]++;
    mp[3]++;
    mp[2]++;

    for(auto i : mp){
        cout << i.first << " " << i.second << "\n";
    }
}
