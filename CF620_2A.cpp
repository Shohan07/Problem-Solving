
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, x, y, a, b, m, n;
    cin >> t;

    while(t--){
        cin >> x >> y >> a >> b;
        m = y-x;
        n = a+b;
        if(m % n == 0 ){
            cout << m/n << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
