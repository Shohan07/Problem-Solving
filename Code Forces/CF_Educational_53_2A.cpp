#include<bits/stdc++.h>
using namespace std;
 int i, n, a[1000006], b[1000006], p[1000006];
int main()
{



    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a[i];
        p[a[i]] = i+1;
    }
    for(i = 0; i < n; i++){
        cin >> b[i];
    }
    int t = 0, cnt=n;
    for(i = 0; i < n; i++){
            if(i>0) cout << " ";
        if(p[b[i]]-t > 0){
            cout << p[b[i]]-t;
            t = p[b[i]];
        }
        else {
            cout << "0";
        }
    }
    cout << endl;
}

