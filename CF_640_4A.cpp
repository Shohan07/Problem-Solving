#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, cnt, ans;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int l = s.length();
        cnt = 0;
       for( i = 0; i < l; i++){
        if(s[i] > 0){
            cnt++;
        }
       }

       if(cnt == 1){
        cout << cnt << endl;
        cout << s << endl;
       }
       else{
        cout << cnt << endl;
       if(l == 2){
        j = 10;
       }
       else if(l == 3){
        j = 100;
       }
       else if(l == 4){
        j = 1000;
       }
       if(s[0] != 0){

          ans  = stoi(s[0]);
              cout << ans*j ;
              j /=10;
            }

       for(i = 1; i < l; i++){
            cout << " ";
            if(s[i] == 0){
                continue;
                j /=10;
            }
         ans  = stoi(s[i]);
              cout << ans*j ; ;
         j /=10;
       }
       cout << endl;
       }


    }
}
