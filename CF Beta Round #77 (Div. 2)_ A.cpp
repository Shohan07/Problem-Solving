#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int i, cnt1=0, cnt0=0, flg = 0;
    for(i=0; i < s.length(); i++){
        if(s[i] == '0'){
            cnt0++;
            cnt1 = 0;
           // cout << cnt0 << " " << cnt1 <<endl;
        }
        else{
            cnt1++;
            cnt0 = 0;
           // cout << cnt0 << " " << cnt1 <<endl;
        }
        if(cnt0 >= 7 || cnt1 >= 7){
            flg = 1;
        }
    }

    if(flg){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
