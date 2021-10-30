
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, cnt, i;

    string s;

    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        cnt = 0;

        for(i = 0; i < n; i++){
            if(s[i] == 't'){
                cnt++;
                continue;
            }
            cout << s[i];
        }
         while(cnt--){
            cout << "t";
        }
        cout << endl;
    }
    return 0;
}
