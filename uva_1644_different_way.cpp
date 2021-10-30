 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset <13000>p;
vector<ll>u;

void f(int x)
{
    ll g, h, f;
    p.set();
    p[0]=p[1]=0;
    u.push_back(2);

    for(g = 4; g<=x; g+=2)p[g] = 0;

    for(g = 3; g <= x; g += 2)if(p[g]){
        for(h = g*g, f = 2*g; h <= x; h += f)p[h] = 0;
        u.push_back(g);
    }
}

int main()
{
  f(1e6+3e5);

    int q, x;
    while(scanf("%d", &q)&&q){
        if(p[q]) printf("0\n");
        else{
            x = upper_bound(u.begin(), u.end(), q) - u.begin();
            printf("%d\n", u[x] - u[x-1]);
        }
    }
    return 0;
}
