#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, p;
    vector<int>v;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n ;i++){
            cin >> p;
            v.push_back(p);

        }
        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++){
            cout << v[i];
            if(i<n-1) cout << " ";
        }
        cout << endl;
        v.clear();
    }
}
