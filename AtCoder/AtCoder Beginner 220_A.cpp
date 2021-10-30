#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, da, db, ans = -1;
    cin >> a >> b >> c;
    bool f = 0;
    if(a % c == 0){
        ans = a;

    }
    else if(b % c == 0){
            ans = b;

    }
    else {
        da = a / c;
        db = b / c;
        if((db - da) > 0){
            ans = (da+1) * c;

        }

    }
    cout << ans << "\n";
}
