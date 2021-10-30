#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    for(int i = 1; i <= t; i++){
        cin >> s;
        int flag = 0 , l = s.size();
        for( int j = 0; j < l/2; j++){
            if(s[j] != s[l-(j+1)]){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<"Case "<<i<<": "<<"No"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        }
    }
    return 0;
}
