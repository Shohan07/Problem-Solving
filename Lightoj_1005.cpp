#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int t,n,k,ans,i,j;
	cin >> t;

	for(i=1; i<=t; i++){
			ans=0;
		cin >> n >> k;
		if(n*n >= k){
			ans = 1;
			for(j=1; j<=k; j++){
			ans=ans*n*n/j;
			n-=1;
		}
		}
		cout << "Case " << i << ": " << ans << endl;
	}
	return 0;
}
