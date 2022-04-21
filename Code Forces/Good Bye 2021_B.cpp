#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t, n, i;
    cin >> t;
    while(t--){
        string s;
        cin >> n;
        cin >> s;
        i = 1;
        while(((s[i] < s[i-1]) || (i > 1 && s[i] == s[i - 1]))  && i < n){
            i++;
        }
        int j = i;
        for(int k = 0; k < i; k++)cout << s[k];
        for(i -= 1 ; i >= 0; i--)cout << s[i];
        cout << "\n";
    }
}
