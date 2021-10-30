
#include<bits/stdc++.h>
using namespace std;

long long int ncr(long long int n,long long int r)
{
    if(n==r) return 1;
    if(r==0) return 1;

    return ncr(n-1, r-1) + ncr(n-1, r);
}

int main()
{
    long long int n,m;
    while(1){
        cin>>n>>m;
        if(n == 0 && m == 0) break;


        cout<<n<<" things taken " << m << " at a time is "<< ncr(n,m)<< " exactly."<<endl;
    }
    return 0;
}
