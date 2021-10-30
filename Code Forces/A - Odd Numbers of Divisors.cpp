#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
bool isComp[MAX + 5];
vector<ll>prm, factor[MAX];


void sieve(ll n)
{
    for(ll i = 2; i * i <= n; i++){
        if(!isComp[i]){
            for(ll j = i * i; j <= n; j+=i)
            {
                isComp[j] = true;

            }
        }
    }
    for(ll i = 2; i <= n; i++){
        if(!isComp[i]){
             prm.push_back(i);
             //cout<<i<<" ";
        }
    }
}

void primeFactorize(ll n)
{
    ll tmp = n;
    ll ans = 1;

     // cout << prm.size() << "\n";
    for(ll i = 0; i < prm.size() && prm[i]*prm[i] <= n; i++){
            ll cnt = 0;
           if(n % prm[i] == 0){
                 while(n % prm[i] == 0){
                    // cout << n<<" "<<prm[i]<<" ";
                   cnt++;
                     n /= prm[i];

            }
            ans = ans*(2*cnt+1);
           }
    }
    if(n > 1){
            ans = ans*3;
            //cout <<n<<" \n";
    }
    factor[ans].push_back(tmp*tmp);
}
int main()
{

    sieve(MAX);
    for(ll i = 1; i <= MAX; i++){
        primeFactorize(i);
    }
    ll t,k,l,r;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld%lld",&k,&l,&r);
        auto LB=lower_bound(factor[k].begin(),factor[k].end(),l)-factor[k].begin(); //O(logN)
        auto UB=upper_bound(factor[k].begin(),factor[k].end(),r)-factor[k].begin();  //O(logN)

        printf("%lld\n",UB-LB);
    }
}
