#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, ans, m;

    cin >> t;

    while(t--){
        cin >> x >> y;
        m = abs(x-y);
        m--;
        if(m < 1){
            cout << x+y << endl;
        }
        else{
            cout << x+y+m << endl;
        }
    }
    return 0;
}
