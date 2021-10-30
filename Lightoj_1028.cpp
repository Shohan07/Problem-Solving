#include<bits/stdc++.h>
using namespace std;
#define n 1000005
bool a[n];
long long int k = 1, tw[n];

void sieve()
{
	long long int i, j;
	a[0]=a[1]=1;
	for(i=4; i<=n; i+=2){
		a[i] = 1;
	}
	for(i=3; i<=sqrt(n); i+=2){
		for(j = i*i; j<=n; j=j+2*i){
			a[j] = 1;
		}
	}
	for(i=2; i<=n; i++){
		if(a[i] == 0){
			tw[k] = i;
			k++;
		}
	}
}
int main()
{
	long long int m,c,r,s,t,i,j;
	cin >> t;
	sieve();
	for(i = 1; i <= t; i++){
		cin >> m;
		r = 1;

		for(j=1;j<=k && tw[j] <= sqrt(m); j++){
			c = 0;
			if(m%tw[j] == 0){
				while(m%tw[j]==0){
					c++;
					m = m/tw[j];
					if(m==0 || m==1){
						break;
					}
				}
				s = c+1;
				r = r*s;
			}
		}
		if(m!=1){
			r = r*2;
		}
		cout << "Case " << i << ": " <<r-1<<endl;
 }
 return 0;
}
