#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, pass = 0, i, flag=0;

	cin >> n >> k;
	int ara[n+2];
	for(i = 1; i <= n; i++){
		cin >> ara[i];
		if(flag==0 && ara[i]>0){
			flag = 1;
		}
	}
	if(flag){
			if(ara[k]>0){
		        for(i = 1; i <= n; i++){
		         if(ara[i]>=ara[k]){
			        pass++;
		           }
			    }
			}
			else{
				for(i = 1; i <= n; i++){
		         if(ara[i]>ara[k]){
			        pass++;
		           }
			    }
			}
	}
	cout << pass << endl;
	return 0;
}
