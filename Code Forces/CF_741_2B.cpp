#include<bits/stdc++.h>
using namespace std;

int n;
string s;
bool prime[100];

void solve()
{
    for(int i = 0; i < n; i++){
        if(s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9'){
            cout << 1 << "\n";
            cout << s[i] << "\n";
            return;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(!prime)
        }
    }
}
int main()
{
    for(int i < 2; i < 100; i++){
        prime[i] = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0) prime[i] = false;
        }
    }
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        solve();
    }
}
