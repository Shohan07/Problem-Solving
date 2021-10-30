
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[7], f, s, mxf, mxs, i;
    cin >> t;
    while(t--){
          a[7]={0};
            for(i = 0; i < 7; i++){
                cout << a[i] << " ";
            }
        for(int i = 0; i < 4; i++){
            cin >> a[i];
        }
        mxf = max(a[0], a[1]);
        mxs = max(a[2], a[3]);
        cout << mxf << " " << mxs << "\n";
        sort(a, a+4);
        for(int i = 0; i < 4; i++){
            cout << a[i] << " ";
        }
        if((a[2] == mxf || a[3] == mxf) &&(a[2] == mxs || a[3] == mxs))cout << "YES\n";
        else cout << "NO\n";
    }
}
