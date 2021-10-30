
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, m, i;

	cin >> t;
	while(t--){
		cin >> n >> m;
		int la = n+1, lb = m+1;
		int a[la], b[lb];
		for(i=0; i<n; i++) cin >> a[i];
		for(i=0; i<m; i++) cin >> b[i];


		sort(a, a+ la);
		sort(b, b+ lb);

		vector<int> v(la + lb);
		vector<int>::iterator it, st;

		it = set_intersection(a, a+la,
							   b, b+lb,
							   v.begin());

		st = v.begin();
		if(*st){
			cout << "YES" << endl
				 << "1 " << *st << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
