#include<bits/stdc++.h>
using namespace std;

 int t, n, x, y , d, ans, l;

int dist(int x, int y)
{
    return (abs(x-y) + (d-1)) / d;
}

int main()
{
    const int INF = int(2e9) + 99;
    cin >> t;

    while(t--){
        cin >> n >> x >> y >> d;

        ans = INF;

        l = abs(x-y);
        if(l % d == 0){
            ans = min(ans, dist(x,y));
        }

        l = y-1;
        if(l % d == 0){
            ans = min(ans, dist(x, 1) + dist(1, y));
        }

        l = n - y;
        if(l % d == 0){
            ans = min(ans, dist(x, n) + dist(n, y));
        }

        if(ans == INF){
            ans = -1;
        }

        cout << ans << endl;
    }
    return 0;
}
