#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt=0;
    string s;
    cin >> n >> s;

    for(i = 1; i < n; i++){
        if(s[i] == s[i-1]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
