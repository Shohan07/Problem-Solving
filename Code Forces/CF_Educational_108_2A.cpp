#include<bits/stdc++.h>
using namespace std;
long long t, r, b, d;
bool solve()
{
    cin >> r  >> b >> d;
    if(d == 0) return r == b;

   int k = (abs(r - b) + d - 1) / d;
   k = max(k, 1);
    return r >= k && b >= k;

}
int main()
{
 int t;
    cin >> t;
    while(t--){

        if(solve()){
            cout << "YES\n";
        }
        else {
                cout << "NO\n";
    }
    }
}
