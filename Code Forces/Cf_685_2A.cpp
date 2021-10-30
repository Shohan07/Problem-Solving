#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, d, cnt;

    cin >> t;

    while(t--){
        cin >> n;

        if(n < 4) cout << n-1 << endl;
        else {
            if(n&1){
               cout << "3" << endl;
            }
            else cout << "2" << endl;
        }
    }
    return 0;
}
