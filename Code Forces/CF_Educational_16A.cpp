#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	int i;

	cin >> s1;
	if(s1[0] == 'a' || s1[0] == 'h'){
		if(s1[1] == '8' || s1[1] == '1'){
			cout << 3 << endl;
		}
		else{
			cout << 5 << endl;
		}
	}
	else if(s1[1] == '8' || s1[1] == '1'){
		cout << 5 << endl;
	}
	else{
		cout << 8 << endl;
	}
	return 0;
}
