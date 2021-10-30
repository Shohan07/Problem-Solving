#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, l, ans;
    string s;
    cin >> t;

    while(t--){
        cin >> s;
        ans = 0, j = 0;;
        l = s.size();
        for(i = 0; i < l; ++i){

            if(s[i] == 'O'){

                        ++j;
                        //cout << j << endl;
                    ans += j;
                }
                else{
                    j = 0;
                }
            }
            cout << ans << endl;
        }
        return 0;
    }
