#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt, sz, j, k;
    cin >> t;
    for(int cas = 1; cas <= t; cas++){
        string i, p;
        cin >> i >> p;

        cout << "Case #" << cas << ": ";
        cnt = 0;
        for(j = 0, k = 0; k < p.size(); ){
            if(i[j] == p[k]){
                j++, k++;
            }
            else{
                k++;
                cnt++;
            }
        }
        if(j == i.size()) cout << cnt << "\n";
        else cout << "IMPOSSIBLE\n";

    }
}
