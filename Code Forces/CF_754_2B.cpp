#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, cnt1;
    string s;
    vector<int> v;

    cin >> t;
    while(t--){
        cin >> n >> s;
        cnt1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') cnt1++;
        }
        for(int i = 0; i < n; i++){
            if((cnt1 + i < n && s[i] == '1') || (cnt1 + i >= n && s[i] == '0')){
                    v.push_back(i);
            }
        }
        if(v.size() > 0){
            cout << 1 << "\n";
            cout << v.size() ;
            for(auto i : v){
                cout << " " << i+1;
            }
            cout << "\n";
        }
        else {
            cout << 0 << "\n";
        }
        v.clear();
    }
    return 0;
}
