#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int t, s, a, b, c, ans, cnt;

	cin >> t;
	while(t--){
        cnt=ans = 0;
		cin >> s >> a >> b >> c;

		ans = s/c;
	    cnt = ans/a;
	    cnt *=b;
	    cout << ans+cnt << endl;
	}
	return 0;
}
