
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, r;
    cin >> t;
    while(t--){
        cin >> n;
        r = sqrt(n);
        if(r*r != n){
            r++;
        }
        cout << r << "\n";
    }
}
