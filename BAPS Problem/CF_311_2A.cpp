#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, mn1, mx1, mn2, mx2, mn3, mx3;

    cin >> n;

    cin >> mn1 >> mx1;
    cin >> mn2 >> mx2;
    cin >> mn3 >> mx3;
    if((mx1+mx2+mn3) <= n) cout << mx1  << " " << mx2 << " " << n-(mx1+mx2) << "\n";

    else if((mx1+mn2+mn3) <= n) cout << mx1 << " " << n-(mx1+mn3) << " " << mn3 << "\n";

    else if((mn1+mn2+mn3) <= n) cout << n-(mn3+mn2) << " " << mn2 << " " << mn3 << "\n";

    return 0;
}
