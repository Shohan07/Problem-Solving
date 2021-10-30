#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, d, a, b;
    cin >> n;
    while(n--){
        cin >> s >> d;

        if(s < d) cout << "impossible\n";
        else{
            b = (s - d) / 2;
            a = d + b;
            if((a + b == s) && (abs(a - b) == d)){
                cout << a << " " << b << "\n";
            }
            else cout << "impossible\n";
        }
    }
}
