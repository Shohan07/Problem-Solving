#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q, n, m, t[101], l[101], h[101], i, j,d1, d2, d3,d4;
    cin >> q;
    while(q--){
        cin >> n >> m;
        bool y = true;
        for(i = 1; i <= n; i++){
            cin >> t[i] >> l[i] >> h[i];
            if(i > 1){
                    if((l[i]< 0 ) || (h[i]<0)){
                        d1 = (l[i] - l[i-1]);
                d2 = (h[i] - h[i-1]);
                d3 = (l[i] - h[i-1]);
                d4 = (h[i] - l[i-1]);
                    }
                    else{
                        d1 = abs(l[i] - l[i-1]);
                d2 = abs(h[i] - h[i-1]);
                d3 = abs(l[i] - h[i-1]);
                d4 = abs(h[i] - l[i-1]);
                    }

                if((t[i] - t[i-1]) >= d1 || (t[i] - t[i-1]) >= d2 || (t[i] - t[i-1]) >= d3 || (t[i] - t[i-1]) >= d4 ){
                    //cout << "YES" << endl;
                }
                else{
                    //cout << "NO" << endl;
                    y = false;
                }
            }
            else{
                if((t[1] - m) >= (abs(l[1])) || (abs(h[1]))) {
                   // cout << "YES" << endl;
                }
                else{
                   // cout << "NO" << endl;
                    y = false;
                }
            }
        }
        if(y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
