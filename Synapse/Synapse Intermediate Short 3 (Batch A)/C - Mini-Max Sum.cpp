#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    vector<unsigned long long>v;
    for(int i = 0; i < 5; i++){
        cin >> n;
        v.push_back(n);

    }
    sort(v.begin(), v.end());
    cout << v[0]+v[1]+v[2]+v[3] << " "
        << v[4]+v[1]+v[2]+v[3] << "\n";
}
