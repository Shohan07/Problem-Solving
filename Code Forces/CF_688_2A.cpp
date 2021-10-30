#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, c, b, n, m, i;
    vector<int>a;
    cin >> t;

    while(t--){
        cin >> n >> m;
        int cnt = 0;
        a.clear();
        for(i = 0; i < n ;i++){
            cin >> c;
           a.push_back(c);
        }
        for(i = 0; i < m; i++){
            cin >> b;
         if (binary_search(a.begin(), a.end(), b)) {
            cnt++;
         }
        }

        cout << cnt << endl;
    }
    return 0;
}
