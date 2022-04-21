
#include<bits/stdc++.h>
using namespace std;

int solve(int best, int n1, int n2){
    return max(0, max(n1, n2) + 1 - best);
}

int main()
{
    int t, a, b, c;

    cin >> t;
    while(t--){
        int mx, mn;
        cin >> a >> b >> c;

        cout << solve(a, b, c) << " "<< solve(b, a, c) << " " << solve(c, a, b) << "\n";
    }

}
