#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, i;

    cin >> t;
    while(t--){
        cin >> n;

        if(n == 1)cout << "1" << "\n";
        else{
            string s = "";

            for(i = 9; i > 1; i--){
                while(n % i == 0){
                    n /= i;
                    s = char(i + '0') + s;
                }
            }
            if(n > 1) cout << "-1" << "\n";
            else cout << s << "\n";
        }
    }
}
