
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, i, j;
	char c;
	bool color = false;
	cin >> n >> m;

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> c;
			if(!color){
					if(c == 'C' || c == 'M' || c == 'Y'){
				color = true;
			    }
			}
		}
	}

	if(color) {
		cout << "#Color" << endl;
	}
	else{
		cout <<  "#Black&White" << endl;
	}

	return 0;
}
