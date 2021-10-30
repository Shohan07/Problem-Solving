#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, z,i;
    string s;

    cin >> t;
    while(t--){
        cin>>s;
        int l = s.length();
        z=x=0;
        for(i=0; i<l; i++){
            if(s[i]=='0')z++;
            else if(s[i]=='1'){x++; break;}
        }

        else if(z==0) cout << "YES\n";
        else cout << "NO\n";
    }
}
