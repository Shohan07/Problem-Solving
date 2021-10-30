#include<bits/stdc++.h>
using namespace std;
bool ok(int a, int b)
{
    if(a%b == 0){
        a /= b;
        int x = sqrt(a);
        return x*x == a;
    }
    return 0;
}
int main()
{
    int t, n, x, i, j;
    cin >> t;
    while(t--){
        cin >> n;
        if(ok(n,2) || ok(n,4)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
