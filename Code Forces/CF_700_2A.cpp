#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, k, l;
    cin >> t;
    string s;
    while(t-- > 0){
        cin >> s;

        l = s.length();
        for(i = 0, j=1; i < l; i++,j++){
            if(j&1){
                if(s[i]>'a')s[i]='a';
                else s[i]='b';
            }
            else{
                if(s[i]<'z')s[i]='z';
                else s[i]='y';
            }

        }
        cout << s << "\n";
    }
}
