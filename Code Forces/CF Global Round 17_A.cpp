#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, k;

    cin >> t;
    while(t--){
        cin >> n >> m;
        k = 2;
        if(n == 1 and m == 1) k = 0;
        else if(n == 1 || m == 1) k = 1;
        cout << k << "\n";
    }
}
