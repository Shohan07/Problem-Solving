#include<bits/stdc++.h>
using namespace std;

#define mx 2002
#define loop(i,n) for(int i=0; i<n; i++)
bool arr[mx];

void generatePrimes()
{
	long long int i, j, lim;
	arr[0] = arr[1] = 1;
   // k=0;
//	prime[k++]=2;
	for(i=4; i<mx; i+=2) arr[i]=1;

	lim=sqrt(mx);
	for(i=3; i<mx; i+=2){
		if(!arr[i]){
			//prime[k++]=i;
			if(i<=lim){
				for(j=i*i; j<mx; j+=2*i){
					arr[j] = 1;
				}
			}
		}
	}
}
int main()
{
	generatePrimes();

    int t, len, i, j;
	string s;
	bool f;
	cin>>t;
	for(i=1; i<=t; i++){
	    int n[11]={0}, cl[27]={0}, sl[27]={0};
		f = false;
		cin >>s;
		len = s.length();
		loop(j,len)
		{
			if(s[j]>='0' && s[j]<='9'){
				n[s[j]-'0']++;
			}
			else if(s[j]>='A' && s[j]<='Z'){
				cl[s[j]-'A']++;

			}
			else{
				sl[s[j]-'a']++;
			}
		}
		cout << "Case " << i << ": ";
		loop(j,10)
		{   // cout<<n[j]<<" ";
			if(arr[n[j]]==0){
				f = true;
				cout << j;
			}
		}
		loop(j, 26)
		{
			if(arr[cl[j]]==0){
				f = true;
				cout << char(j+'A');
			}
		}
		loop(j, 26)
		{
			if(arr[sl[j]]==0){
				f = true;
				cout << char(j+'a');
			}
		}
		if(!f){
			cout << "empty";
		}
		cout << endl;
	}
	return 0;
}
