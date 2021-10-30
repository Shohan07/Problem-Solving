#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1 = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    string s2;
    int i, j, n;

    while(getline (cin, s2)){
		string ans="";
		for(i=0; i<s2.size(); i++){
			if(s2[i] != 'Q' && s2[i] != 'A' && s2[i] != 'Z')
			{
				n = s1.find(s2[i]);
				if(n!=-1){
					ans.append(s1,n-1,1);
				}else ans.append(s2,i,1);
			}else ans.append(s2,i,1);
		}
		cout << ans << endl;
    }
    return 0;
}
