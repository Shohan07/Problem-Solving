
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, ans, k, i, j, p, q;
    cin >> t;
    while(t--){
        cin >> n;
        bool neg = 0;
        bool pos = 0;
         p = -1, q = -1;
         int z = 0;
        while(n--){
            cin >> a;
            if(a<0 ){
                    neg=1;
                    if(p>a) p = a;
            }
            else if(a>0 ) {
                    pos = 1;
                    if(q<a)q = a;
                   // cout << "kiki";
            }
        }
        if(neg && pos) cout << "NO\n";
        else{
            if(pos){
                cout << q+1 << "\n";
                for(i = 0; i < q; i++)cout << i << " ";
                cout << q << "\n";
            }
            else{
                cout << abs(p)+1 << "\n";

                cout << 0 << " ";
                for(int a = -1; a>p; a--) cout << a << " ";
                cout << p << "\n";
            }
        }
    }
}
