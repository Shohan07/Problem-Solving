#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t, L, v, l, r, ans;

	cin >> t;
	 while(t--){
		cin >> L >> v >> l >> r;

		ans = (L/v) - (r/v) + ((l-1)/v);

		cout << ans << endl;
	 }
	 return 0;
}
