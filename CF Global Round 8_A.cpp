
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, n, cnt;
    cin >> t;
    while(t--){
        cnt = 0;
        bool f = 1;
        cin >> a >> b >> n;

        if(a<b){
            swap(a,b);
        }
            while(a<=n && b<=n){
                if(f){
                    b+=a;
                    f = 0;
                }
                else{
                    a+=b;
                    f = 1;
                }
                cnt++;
               // cout << b << " " << cnt << endl;
            }
            cout << cnt << endl;
    }
    return 0;
}
