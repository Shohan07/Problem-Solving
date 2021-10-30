
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define MOD 1,000,000,007
const int N=105;

int countFive(int n){
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

int main(){

    int t,c=1,n;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
           // lower bound code start
        int l=0,r=1e9+1,m,ans=-1;
        while(l<=r){
            m=l+(r-l)/2;
            if(countFive(m)>=n){
                ans=m;
                r=m-1;
            }
            else l=m+1;
        }
           // lower bound code end
        if(countFive(ans)==n) printf("Case %d: %d\n",c,ans);
        else printf("Case %d: impossible\n",c);
        c++;

    }
}
