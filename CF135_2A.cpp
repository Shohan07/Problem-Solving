#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, i, j, cnt = 0;
    string s;
    cin >> k >> s;
    char ch;
    sort(s.begin(), s.end());
    int l = s.length();
    for(i = 0; i < l; i++){
        if(i%k == 0){
            ch = s[i];
        }
        if(s[i] == ch){
            cnt++;
        }
    }

    if(cnt==l && cnt%k == 0){
        for(i = 0; i < k; i++){
            for(j = 0; j < l; j+=k){
                cout << s[j];
            }
        }
        cout << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}

