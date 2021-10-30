#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
   // string s, t, sb;

    cin >> q;
    while(q--){
       string a, b;
       cin >> a >> b;
       int la = a.size();
       int lb = b.size();

       int g = __gcd(la,lb);
       int lcm = (la*lb)/g;

       string sa, sb;
       for(int i = 0; i< lcm/la; i++){
        sa += a;
       }
       for(int i = 0; i < lcm/lb; i++){
        sb += b;
       }
       if(sa == sb) cout << sa << "\n";
       else cout << -1 << "\n";
    }
return 0;
}
