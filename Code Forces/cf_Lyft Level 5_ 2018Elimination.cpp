
#include<bits/stdc++.h>
using namespace std;
#define mx 1000007
bool is_prime[mx];
long long int prime[mx], k, lim;
void seive()
{
	long long int i, j, lim;
	is_prime[1] = 1;
    k=0;
	prime[k++]=2;
	for(i=4; i<mx; i+=2) is_prime[i]=1;

	lim=sqrt(mx);
	for(i=3; i<mx; i+=2){
		if(!is_prime[i]){
			prime[k++]=i;
			if(i<=lim){
				for(j=i*i; j<mx; j+=2*i){
					is_prime[j] = 1;
				}
			}
		}
	}
}
int main()
{
	long long int t, a, b, sum, dif, i, flag;
	seive();
	cin >> t;
	while(t--){
		cin >> a >> b;
		flag = 0;
		sum=a+b;
		dif=a-b;
		if(dif==1){
			if(sum<=mx){
				if(is_prime[sum]) {
					cout << "NO" << endl;
				}
				else{
					cout << "YES" << endl;
				}
			}
			else{
				for(i=0; i<k; i++){
					if(sum%prime[i]==0){
						cout << "NO" << endl;
						flag = 1;
						break;
					}
				}
				if(flag==0){
					cout << "YES" << endl;
				}
			}
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
