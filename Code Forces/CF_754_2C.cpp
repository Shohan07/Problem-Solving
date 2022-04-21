#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n, a, b, c;
    string s;
    cin >> n >> s;
    for(int k = 2; k < 8; k++){
        for(int i = 0; i < n - k + 1; i++){
            a = b = c = 0;
            for(int j = i; j < i + k; j++){
                if(s[j] == 'a') a++;
                else if(s[j] == 'b')b++;
                else c++;
            }
            if(a > b && a > c) return k;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
    return 0;
}
