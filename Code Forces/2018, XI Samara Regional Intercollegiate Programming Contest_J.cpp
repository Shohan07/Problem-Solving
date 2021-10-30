
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, v, a[200007]={0}, i, j, k,pr=0;

	cin >> n;
	while(n--){
		cin >> v;
		a[v]++;
		if(a[v]/2==0){
			pr++;
		}
	}
	cout << pr/2 << endl;
	return 0;
}

