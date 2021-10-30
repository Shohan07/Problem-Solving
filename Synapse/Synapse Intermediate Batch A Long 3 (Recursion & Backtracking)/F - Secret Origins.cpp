#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,l,m,n,a[100000], b[100000], t, ans ;
    string s, s1;
    vector<string>v;
    cin >> t;
    for(i=1; i<=t; i++){
       cin >> m;
       s.clear(), s1.clear();

       j=0;
       while(m != 0){
        a[j] = m%2;
        m /=2;
        j++;
       }
       a[j]=0;
       for(k=j; k >= 0; k--){
        s1 = a[k]+'0';
        s += s1;
       }
       next_permutation(s.begin(), s.end());
       long long d = s.size()-1;
       ans = 0;
       for(n = 0; n < s.length(); n++ ){
            b[n] = s[n]-'0';
            if(b[n]==1){
                ans += pow(2,d);
            }
            d--;
       }
       cout << "Case " << i << ": " << ans << "\n";
    }
    return 0;
}
