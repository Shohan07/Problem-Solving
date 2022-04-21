#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;
        while(n--){
            long long a;
            cin >> a;
            x ^= a;
        }
        if(x % 2 == y % 2) cout << "Alice\n";
        else cout << "Bob\n";
    }
}
