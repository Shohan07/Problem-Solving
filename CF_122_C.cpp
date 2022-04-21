#include<bits/stdc++.h>
using namespace std;
long long mx = 1e10;

vector<long long>v;
void f(long long n)
{
    if(n>=mx)return;
    v.push_back(n);
    f(n*10+4);
    f(n*10+7);
}
int main()
{
    f(0);
    sort(v.begin(), v.end());
    //for(auto x : v)cout << x << "\n";
    long long l, r, i, j, ans=0, cnt;
    cin >> l >> r;
    for(i = 0; i < v.size(); i++){
        if(l  <= v[i]){

            cnt  = v[i]-l+1;
        if(v[i]>r)cnt -= v[i]-r;

            ans += cnt * v[i];
             //cout  << cnt << " " << ans << " "<<v[i]<<"\n\n";
            l = v[i]+1;

        }
        if(v[i]>=r)break;
    }
    cout << ans << "\n";
}
