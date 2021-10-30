#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, i, sum = 0, ans;
    cin >> k >> n >> w;
    for(i = 1; i <= w; i++){
        sum += (i*k);
    }
    ans = sum - n;
    if(ans >0){
        cout << ans << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}
