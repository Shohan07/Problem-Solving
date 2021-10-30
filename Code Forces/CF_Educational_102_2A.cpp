#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, d, a[107], i;

    cin >> t;

    while(t--){
            bool f = true;
        cin >> n >> d;
        for(i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > d) f = false;
        }
        if(f ) cout << "YES\n";

        else{
            sort(a, a+n);
            if((a[0] + a[1]) > d){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}
