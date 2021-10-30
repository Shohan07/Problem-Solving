
#include<bits/stdc++.h>
using namespace std;
typedef __int128 ll;
int main()
{
    long long n, s;
    cin >> s;
    while(s--){
        cin >> n;
        ll m=1;
        ll re=m*n*(n-1)/2 + m*n*(n-1)*(n-2)*(n-3)/24 + 1;
        string a ;
        while(re){
            a.push_back(char('0'+re%10));
            re/=10;
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
    }
    return 0;
}
