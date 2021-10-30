
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, a[5],  mxf, mxs;
    cin >> k;
    while(k--){
            a[5]={0};
        for(int i = 0; i < 4; i++){
            cin >> a[i];
        }
        mxf = max(a[0], a[1]);
        mxs = max(a[2], a[3]);

        sort(a, a+4);

        if((a[2] == mxf || a[3] == mxf) &&(a[2] == mxs || a[3] == mxs))cout << "YES\n";

        else cout << "NO\n";
    }
    return 0;
}
