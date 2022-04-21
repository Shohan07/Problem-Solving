
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a;

    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int k = 1;
        for(int i = 0, j = n-1; k <= n/2; k++){
            cout << v[j] << " " << v[i] << "\n";
             j--;
        }
    }
}
