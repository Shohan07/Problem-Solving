#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, p;
    cin >> t;
    while(t--){
        cin >> n;


        int mx = INT_MIN, mn = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> p;
            if(p > mx) mx = p;
            if(mn > p) mn = p;
        }

        cout << mx - mn << "\n";
    }
}
