#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+1);;
        bool check = 1;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            check &= v[i] > v[i - 1];
        }
        if(n % 2 == 0 or !check){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
