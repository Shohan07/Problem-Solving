#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5], b[n+5];
        map<int, int> mp1, mp2;

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            mp1[a[i]] = i;
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
            mp2[b[i]] = i;
        }
        if(a[1] < b[1])cout << 0 << "\n";
        else{
            int mn = INT_MAX, opr, j = 1;
            for(int i = 1; i <= 2*n; i+=2)
            {
                while(i > b[j]) j++;
                opr = (mp1[i]-1) + (mp2[b[j]]-1);
                mn = min(opr, mn);
            }
            cout << mn << "\n";
        }
    }
}
