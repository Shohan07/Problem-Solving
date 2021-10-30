
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,cnt=0;
	string s;

	cin >> n;

	while(n--){

		cin >> s;
		if(s[1]=='+') {
			cnt++;

		}
		else{
			cnt--;

		}
	}
	cout << cnt << endl;
	return 0;
}
