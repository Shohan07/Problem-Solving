
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a1, a2, a3, ans = 0;
    cin >> a1 >> a2 >> a3;

    long long sm = (a1+a3);
    long long s = (sm+1)/2;
    if(sm&1)ans++;
    //cout << s << " " ;
    if(a2 > s){
        ans  += (a2-s)*2;
        cout << ans << "\n";
    }
    else {
            ans += s-a2;
            cout << ans << "\n";
    }
}
