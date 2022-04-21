#include<bits/stdc++.h>
using namespace std;
map<int, int>mp;
int main()
{
    int t, n, l, a;

    cin >> t;
    while(t--){

        mp.clear();

        int cnt = 0;

        cin >> n;
        vector<int>v(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a;

            mp[a]++;

        }
        for(int i = -100; i < 101; i++){
            if(i == 0){
                if(mp[i] > 0)cnt++;
            }
           else if(mp[i] > 0 && i != 0){
                if(mp[i] > 1 && i < 0){
                        if(mp[i*-1] > 0)cnt++;
                        else cnt += 2;
                }
                else if(mp[i] > 1 && i > 0){
                    if(mp[i*-1] > 0)cnt++;
                    else cnt += 2;
                }
                else cnt++;
            }

        }
        cout << cnt << "\n";
    }
}
