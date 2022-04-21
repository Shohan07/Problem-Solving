#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int r = n % 7;
        if(r){
                int l = n % 10;
                int ad = l + 7 - r;
                if(ad > 9){
                    n -= r;
                }
               else n += 7 - r;
        }
        cout << n << "\n";
    }
}
