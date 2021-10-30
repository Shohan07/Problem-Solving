#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 2000006

ll arr[MAX + 5];
const ll block_s = 320;

struct Query
{
    ll l, r, id;
    bool operator<(const Query &oth)const
    {
        ll b_a = l / block_s;
        ll b_b = oth.l / block_s;
        if(b_a == b_b) return r < oth.r;
        return b_a < b_b;
    }
};

ll sum, L, R, ans[MAX + 5], freq[1000000 + 5];
Query queries[MAX + 5];

void add(ll idx)
{
    sum -= (arr[idx] * freq[arr[idx]] * freq[arr[idx]]);
    freq[arr[idx]]++;
    sum += (arr[idx] * freq[arr[idx]] * freq[arr[idx]]);
}

void remov(int idx)
{
    sum -= (arr[idx] * freq[arr[idx]] * freq[arr[idx]]);
    freq[arr[idx]]--;
    sum += (arr[idx] * freq[arr[idx]] * freq[arr[idx]]);
}

int main()
{
    ll n, Q, T, cs = 1;

        cin >> n >> Q;

        sum = 0;
        memset(freq, 0, sizeof freq);
        L = 0;
        R = -1;


        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(ll i = 0; i < Q; i++)
        {
            cin >> queries[i].l >> queries[i].r;
            --queries[i].l;
            --queries[i].r;
            queries[i].id = i;
        }
        sort(queries, queries + Q);
        for(ll i = 0; i < Q; i++)
        {
            while(queries[i].l < L) add(--L);
            while(queries[i].l > L) remov(L++);
            while(queries[i].r < R) remov(R--);
            while(queries[i].r > R) add(++R);
            ans[queries[i].id] = sum;
        }

        for(ll i = 0; i < Q; i++)
        {
            cout << ans[i] << "\n";
        }
    return 0;
}
