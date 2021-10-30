#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, c, sum, mx;
	int seq = 0;
	while(cin >> n >> m >> c){
			seq++;
		if(n==0 && m==0 && c==0) return 0;

		int dc[21], sw[21] ={0};

		for(int i=1; i <= n; i++) cin >> dc[i];

		sum = 0, mx = 0;
		for(int i = 1; i <= m; i++){
			int x;
			cin >> x;
			if(sw[x] == 0){
				sum+=dc[x];
				sw[x]=1;
			}
			else{
				sum-=dc[x];
				sw[x] = 0;
			}
			if(mx<sum) mx = sum;
		}
		cout << "Sequence " << seq << endl;
		if(mx > c){
			cout << "Fuse was blown." << endl << endl;
		}
		else{
			cout << "Fuse was not blown." << endl << "Maximal power consumption was " << mx << " amperes." << endl << endl;
		}

	}
	return 0;
}
