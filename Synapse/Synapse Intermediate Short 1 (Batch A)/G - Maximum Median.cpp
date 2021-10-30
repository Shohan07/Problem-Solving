#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)  for(int i=a;i<b;i++)
int n,k,a[200005];
bool check(int mid){
    int cur=0;
    rep(i,n/2,n){
        cur+=max(0,mid-a[i]);
    }
    return cur<=k;
}
int main(){
    long long t=1;
while(t--){
    cin>>n>>k;
    rep(i,0,n) cin>>a[i];
    sort(a,a+n);
    if(n==1){
        cout<<a[0]+k<<endl;
        break;
    }
    int lo=a[n/2],hi=2e9+1;
    while(hi-lo>1){
        int mid=(lo+hi)/2;
        if(check(mid)) lo=mid;
        else hi=mid;
    }
    cout<<lo<<endl;
}
}
