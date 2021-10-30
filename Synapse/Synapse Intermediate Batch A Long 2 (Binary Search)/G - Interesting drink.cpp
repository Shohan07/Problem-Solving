#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100007], q, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cin >> q;
    while(q--){
        cin >> m;
        int u = upper_bound(arr, arr+n, m) - arr;
        cout << u << "\n";
    }
}
