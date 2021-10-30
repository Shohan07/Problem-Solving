#include<bits/stdc++.h>
using namespace std;

long long int ncr(long long int n, long long int r)
{
	long long int p = 1, k =1;

	if(n-r<r) r = n-r;

	if(r != 0){
		while(r){
			p *= n;
			k *= r;

			long long int m = __gcd(p, k);

			p /= m;
			k /= m;

			n--;
			r--;
		}
	}
	else
		p = 1;

	return p;
}

int main()
{
	long long int t, n, k, i, j;


	cin >> t;
	for(i = 1; i <= t; i++){
		cin >> n >> k;
		cout << "Case " << i << ": " << ncr((k-1+n),n) << endl;

	}
	return 0;
}
