#include<bits/stdc++.h>
using namespace std;
 long long t, l, r, mid, a, b, c;

int main()
{

    cin >> t;

    while(t--){
        cin >> l >> r;
      //  if((r-l) == 0) cout << 0 << "\n";
        //else if ((r-l) == 1) cout << 1 << "\n";

                mid = r/2;
                if(mid<l) cout << r-l << "\n";
                 else cout << r-(mid+1) << "\n";



        }
    }


