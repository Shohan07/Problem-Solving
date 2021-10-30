#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, i;
	string s;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		for(i=0; i<n; i++){
			cout<<s[i];
		}
		cout << endl;
	}
}
