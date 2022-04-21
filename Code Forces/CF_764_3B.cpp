#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        //c
        int d = b - a;
        int tmp = b + d;
        if((tmp % c == 0 ) && (tmp >= c)){
            cout << "YES\n";
            continue;
        }
        // a
        d = c - b;
        tmp = b - d;
        if((tmp % a == 0) && (tmp >= a)){
            cout << "YES\n";
            continue;
        }
        // b
        d = c - a;
        if(d % 2){
            cout << "NO\n";
            continue;
        }
        d /= 2;
        tmp = a + d;
        if((tmp % b == 0) && (tmp >= b)){
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}
