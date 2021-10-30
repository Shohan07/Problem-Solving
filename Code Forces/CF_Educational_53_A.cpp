#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, flag = 0, i;
	string s;

	cin >> n >> s;

	if(n>1){
		for(i=0; i<n-1; i++){
			if(s[i] != s[i+1]){
				cout << "YES" << endl;
				cout << s[i] << s[i+1] << endl;
				flag = 1;
				break;
			}
		}
	}
	else{
		cout << "NO" << endl;
		flag = 1;
	}
	if(flag == 0){
		cout << "NO" << endl;
	}
	return 0;
}
