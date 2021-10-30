#include<bits/stdc++.h>
using namespace std;

bool areSame(long long int a[], long long int n)
{
	unordered_map<long long int, long long int> m;

	for(long long int i = 0; i < n; i++){
		m[a[i]]++;
	}
	if(m.size()==1){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	long long int t, n,i;

	cin >> t;
	while(t--){
		cin >> n;
		long long int a[n+1];


		for(i = 0; i < n; i++){
			cin >> a[i];
		}

		if(areSame(a,n)){
			cout << n << endl;
		}
		else{
			cout << 1 << endl;
		}
}
return 0;
}
