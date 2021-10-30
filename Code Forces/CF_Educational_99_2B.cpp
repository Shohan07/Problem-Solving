
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, x, cnt, s, r, i;

    cin >> t;
    while(t--){
        cin >> x;
        s = 0, cnt = 0;
        if(x==2) {
                cout << 3 <<endl;
                continue;
        }
        for(i = 1; ; i++){
          if((s+i)==x){
                s += i;
                cnt++;
          break;
          }
          if((s+i)>x){
            s += i;
            cnt++;
            break;
          }
            s += i;
            cnt++;
        }
        if( s == x) cout << cnt << endl;

        else if((s-x) == 2) cout << cnt << endl;
        else if((s-x) == 1) cout << cnt+1 << endl;
        else cout << (cnt+ (s-x-2)) << endl;
    }
    return 0;
}
