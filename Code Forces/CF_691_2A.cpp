#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,  sr, sb;
      string r, b;
    cin >> t;

    while(t--){
        cin >> n;
        sr = sb = 0;
        cin >> r;
         cin >> b;
        for(int i = 0; i < n; i++){
             if(r[i]> b[i])sr++;
             else if(r[i]<b[i])sb++;

        }
        if(sr > sb) cout << "RED\n";
        else if(sr < sb) cout << "BLUE\n";
        else if(sr == sb) cout << "EQUAL\n";
        //cout << sr <<" " << sb << endl ;
    }
    return 0;
}
