#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sum, cnt;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
       cnt = sum = 0;
        for(int i = 0; i < n; i++){
            sum += s[i] - 48;
            if(s[i] != '0') cnt++;
        }
        if(s[n-1] != '0')cnt--;
        cout << sum + cnt << "\n";
    }
}
