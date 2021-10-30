#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1="123";
	bool f=false;
	cin >> s;
	int l = s.length();
   for(int i = 0; i < 3; i++){
		for(int j=0; j < l; j++){
			if(s[j]==s1[i]){
		if(f){
			cout << "+" <<s[j];
		}
		else{
			cout << s[j];
			f = true;
		}
	}
		}

   }
   cout << endl;
   return 0;


}
