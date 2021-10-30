#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, ans, i = 1;
    while(cin >> a >> b){
        if(a == 0 && b == 0)break;

        ans = (a*(a-1)/2) * (b*(b-1)/2);
        cout << "Case " << i << ": " << ans << "\n";
        i++;
    }
}
