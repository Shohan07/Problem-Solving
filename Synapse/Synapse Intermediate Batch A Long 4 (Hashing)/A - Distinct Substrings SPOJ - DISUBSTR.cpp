#include<bits/stdc++.h>
using namespace std;
#define ULL          unsigned long long
#define FOR(i,a,b)   for(int i=a;i<=b;i++)

const int N = 1005;
const int M = 44444;
const ULL hs = 3797;

ULL F[N], H[N];
char in[N];
int n;
ULL seg(int x, int y){
    return H[y] - F[y-x+1]*H[x-1];
}
int main()
{
    F[0]=1; for(int i = 1; i < N; i++)F[i] = F[i-1] *hs;
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%s", in+1);
        n = strlen(in+1);
        H[0] = 0; FOR(i, 1, n+1) H[i] = H[i-1]*hs + in[i];
        int ans = 0;
        for(int l = 1; l <= n; l++){
            unordered_set<ULL>st;
            for(int i = 1; i+l-1 <= n; i++){
              st.insert(seg(i,i+l-1));
            }
             ans += st.size();
        }
       printf("%d\n", ans);
    }
}
