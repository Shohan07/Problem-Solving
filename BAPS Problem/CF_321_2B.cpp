
#include<bits/stdc++.h>
using namespace std;

typedef long long Long;
typedef pair<Long, Long>PLL;
typedef vector<PLL> VPLL;

#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define pb push_back
#define mp(a,b) make_pair(a,b)
Long Res;
VPLL V;
int main()
{
    int N,D,M,S;
    while(cin >> N >> D){
        Res = -1;
        V.clear();
        REP(i,1,N){
            cin >> M >> S;
            V.pb(mp(M, S));
        }
        sort(V.begin(),V.end());
        Long cursum = 0;
        for(int l = 0, r = 0; l < N; cursum -= V[l].second, l++){
            while(r<N && abs(V[l].first - V[r].first) < D) cursum += V[r++].second;
            if(Res <= cursum) Res =  cursum;
        }
        cout << Res << endl;
    }
    return 0;
}
