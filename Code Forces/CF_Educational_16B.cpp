#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, x, i;

	cin >> n;
	vector<long long int>a;
	for(i = 0; i < n ; i++){
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());

	if(n%2==0){
		n = (n/2)-1;
	}
	else{
		n=n/2;
	}
	cout << a[n] << endl;
	return 0;
}
