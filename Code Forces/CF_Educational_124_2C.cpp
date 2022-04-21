#include<bits/stdc++.h>
using namespace std;

long long addEdge(long long node, vector<long long>row){
    int n = row.size();
    long long cost = 1e9 + 7;
    for(int i = 0; i < n; i++){
        cost = min(cost, abs(node - row[i]));
    }
    return cost;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);

        for(int i = 0; i < n; i++)cin >> a[i];
        for(int i = 0; i < n; i++)cin >> b[i];

        if(n == 1){
            cout << (abs(b[0] - a[0])) << "\n";
            continue;
        }
        long long ans1 = abs(b[0] - a[0]) + abs(b[n-1] - a[n-1]);
        long long ans2 = abs(b[0] - a[n-1]) + abs(a[0] - b[n-1]);

        long long ans3 = abs(a[0] - b[0]) + addEdge(a[n-1], b) + addEdge(b[n-1], a);
        long long ans4 = abs(a[n-1] - b[n-1]) + addEdge(a[0], b) + addEdge(b[0], a);
        long long ans5 = abs(a[0] - b[n-1]) + addEdge(a[n-1], b) + addEdge(b[0], a);
        long long ans6 = abs(a[n-1] - b[0]) + addEdge(a[0], b) + addEdge(b[n-1], a);

        long long ans7 = addEdge(a[0], b) + addEdge(a[n-1], b) + addEdge(b[0], a) + addEdge(b[n-1], a);

        long long ans = min ({ans1, ans2, ans3, ans4, ans5, ans6, ans7});

        cout << ans << "\n";
    }
}
