#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
bool isComp[MAX + 5];
bool isSegComp[MAX + 5];
vector<int>prm;

void sieve(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(!isComp[i])
        {
            for(int j = i * i; j <= n; j += i)
                isComp[j] = true;
        }
    }
    for(int i = 2; i <= n; i++)
    {
        if(!isComp[i])
            prm.push_back(i);
    }
}

void segmentedSieve(ll L, ll R)
{
    if(L == 1) ++L;
    ll sqr = sqrtl(R);
    sieve(sqr);
    for(int i = 0; i < (int)prm.size() && prm[i] <= sqr; i++)
    {
        int p = prm[i];

        ll j = p * p;
        if(j < L)j = ((L + p - 1) / p) * p;
       // Previous 2 lines explain this : ll j = max(1LL * p * p, ((L + p - 1) / p) * p);
        for(; j <= R; j += p)
        {
            isSegComp[j - L] = true;
        }
    }
    for(ll i = L; i <= R; i++)
    {
        if(!isSegComp[i - L])
            cout << i << " ";
    }
}

int main()
{
    segmentedSieve(1LL, 100LL);
    return 0;
}
