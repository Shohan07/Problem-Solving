
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, l, r, i, cnt=0;
	cin >> n >> m;
	int ara[m+1];
	memset(ara,0,sizeof(ara));

	while(n--){
		cin >> l >> r;
		for(i = l; i <= r; i++){
			ara[i] = 1;
		}
	}

	for(i=1; i<=m; i++){
		if(ara[i] == 0){
			cnt++;
		}
	}
	cout << cnt << endl;
	if(cnt>0){
		for(i = 1; i<=m; i++){
		if(ara[i] == 0){
			cout << i << " " ;
		}
	}
	}
	cout << endl;
	return 0;
}
