#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, p;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n == 1) p = 1;
        else if(n & 1){
            p = (n / 2) + 1;
        }
        else p = n / 2;
        if(k > p)cout << -1 << "\n";
        else{
           int rc = 1, cc =  1;
            for(int r = 1; r <= n; r++){
                for(int c = 1; c <= n; c++){
                    if(r == rc &&  c == cc && k > 0){
                            k--;
                            cout << "R";
                            rc += 2, cc += 2;
                    }
                    else cout << ".";
                }
                cout << "\n";
            }
           // cout << "\n";
        }
    }
}
