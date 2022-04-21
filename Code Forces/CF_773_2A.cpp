
#include<bits/stdc++.h>
using namespace std;

bool is_p(long long x1, long long y1, long long x2, long long y2){
    return (y1 > 0 && y1 == y2);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x1, x2, x3, y1, y2, y3, ans = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if(is_p(x1, y1, x2, y2) && y3 < y1){
            ans += (abs(x1-x2));
        }
        if(is_p(x1, y1, x3, y3) && y2 < y1){
            ans += (abs(x1-x3));
        }
        if(is_p(x2, y2, x3, y3) && y1 < y2){
            ans += (abs(x2-x3));
        }

        cout << ans << "\n";
    }
}
