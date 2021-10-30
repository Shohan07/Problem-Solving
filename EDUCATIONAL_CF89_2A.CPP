
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, a, b, ans;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ans = min (a,b);
        ans =  min(ans,((a+b)/3));
       cout << ans << endl;

    }
    return 0;
}
