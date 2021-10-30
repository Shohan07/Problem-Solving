#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,i=0,e=0,t=0,j, ans=0;
	string s;
	getline(cin,s);
	int l = s.size();
	for(j=0; j<l; j++){
		if(s[j]=='n') n++;
		else if(s[j]=='i') i++;
		else if(s[j]=='e') e++;
		else if(s[j]=='t') t++;
	}
  //cout << n << " "<< i<< " " << e<< " " << t <<endl;
   if((n/3) > 1) n += ((n/3)-2);
    n = n/3, e = e/3, i = i/1, t = t/1;

   // cout << n << " "<< i<< " " << e<< " " << t <<endl;
     ans = min(n, i);
     ans = min(ans, e);
     ans = min(ans, t);

	cout << ans;
	return 0;
}
