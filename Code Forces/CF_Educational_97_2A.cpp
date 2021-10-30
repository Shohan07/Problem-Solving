
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, r, t;

    cin >> t;

    while(t--){
        cin >> l >> r;

        if(2*l > r ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
