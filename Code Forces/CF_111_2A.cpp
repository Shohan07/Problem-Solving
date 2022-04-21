#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sc = 0;
    cin >> n;
    vector<int>cv(n);
    for(int i = 0; i < n; i++){
        cin >> cv[i];
        sc += cv[i];
    }
    sort(cv.begin(), cv.end());
    int mv = 0, cnt = 0;
    for(int i = n-1; i >= 0; i--){
        cnt++;
        sc -= cv[i];
        mv += cv[i];
        if(mv > sc)break;
     }
    cout << cnt << "\n";
}
