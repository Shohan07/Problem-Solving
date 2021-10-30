#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int ans=0;

void fnc(string a,int p)
{
	int sz=a.size();
	a="#"+a;

	string w="";
	for(int i=1;i<=sz;i++)
	{
		w+=a[i];
		if(sz%i==0)
		{
			int c=0,flag=1;
			for(int j=i+1;j<=sz;j++)
			{
				if(w[c]!=a[j]) {
                        flag=0;break;
                }
				c++;
				if(c==i)c=0;
			}
			if(flag==1)
			{
				if(p==1) {

					mp[w]=1;
				}
				else
				{
					if(mp.find(w)!=mp.end()) {

						ans++;
					}
				}

			}
		}

	}


}
int main()
{
	string a,b;
	cin>>a>>b;
	fnc(a,1);
	fnc(b,0);
	cout<<ans<<"\n";

}

