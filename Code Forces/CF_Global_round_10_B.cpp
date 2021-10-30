#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, n, i, j, me;
	unsigned long long int k, ld;
	cin>>t;
	while(t--){
		cin >> n >> k;
		long long int a[n+1];
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		ld = k%10;
		if(ld%2 == 0){
			for(j = 0; j < 2; j++){
					me = *max_element(a, a+n);
				for(i = 0; i < n; i++){

					a[i]=me-a[i];
					if(j == 1){
							if(i != n-1){
								cout << a[i] << " ";
							}
							else{
								cout << a[i] << endl;
							}

						}
				}
			}
		}
		else{
			me = *max_element(a, a+n);
			for(i = 0; i < n-1; i++){
				cout << me-a[i] << " ";
			}
			cout << me-a[n-1] << endl;
		}
	}
return 0;
}

