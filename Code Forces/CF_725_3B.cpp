#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, cnt, avrg, a, sum;
    vector<int>v;
    cin >> t;
    while(t--){
            sum = cnt = 0;
        cin >> n;
        v.clear();
        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
            v.push_back(a);
        }
        if(sum % n == 0){
             avrg = sum / n;
        for(auto i : v){
            if(i > avrg)cnt++;
            //cout << " "<< i ;
        }
        cout <<cnt << "\n";
        }
        else cout << -1 << "\n";
    }
}
