#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b, c, ans = 100000;
    cin >> n;

    for(i = 1; i <= n; i++){
        a = n;
        b = i;
        c = 0;
        while((a > 1 || b > 1) && a > 0 && b > 0){
            if(a > b) swap(a, b);
            b = b- a;
            c++;
        }
        if(a == 1 && b == 1) ans = min(c, ans);
    }
    cout << ans << "\n";
}
