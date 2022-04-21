#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans = 1;
        for(int i = 1; i <= n; i++){
            int p;
            cin >> p;
            bool check =  0;
            for(int j = i+1; j >= 2; j--){
                if(p % j != 0){
                    check = 1;
                    break;
                }
            }
            ans &= check;
        }
        if(ans){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
