#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, ans=0,i=0;
	string a, b;

	cin >> n;
	cin >> a >> b;

	while(i<n){
		if(a[i] != b[i]){
			if(i+1<n && a[i+1]!=b[i+1] && a[i]!=a[i+1]){
				i+=2;
				ans++;
			}
			else{
				i++;
				ans++;
			}
		}
		else{
			i++;
		}
	}
	cout << ans << endl;
	return 0;
}
