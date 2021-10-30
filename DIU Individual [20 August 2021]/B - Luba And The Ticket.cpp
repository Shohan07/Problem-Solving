#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<char> f;
string n;

string ans = "";
int mn = 1e9;

void solve(int idx){
	if(idx == 6){
		int ss = 0 , ff = 0;
		for(int i = 0 ; i < 3 ; i++){
			ss += f[i];
		}
		for(int i = 3 ; i < 6 ; i++){
			ff += f[i];
		}
		if(ff == ss){
			int cur = 0;
			for(int i = 0 ; i < 6 ; i++){
				if(f[i] != n[i])cur++;
			}
			if(mn > cur){
				mn = cur;
			}
		}
		return;
	}
	for(int i = 0 ; i <= 9 ; i++){
		f.push_back(i+'0');
		solve(idx+1);
		f.pop_back();
	}
}

int main() {

	cin >> n;
	solve(0);
	cout << mn << endl;
	return 0;
}
