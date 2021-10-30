#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,m,n,w,limit,odd, validity,i,j;

	cin >>t;
	for(i = 1; i <= t; i++){
		cin >> w;
		limit = w /2;
		validity = 0;
		odd = 0;
		for(j = 2; j <= limit; j= j*2){
			if(w%j == 0)
				odd = w/j;

			if(odd%2 == 1){
				validity = 1;
				      break;
            }
        }
        if(validity == 1){
            cout<<"Case "<<i<<": "<<odd<<" "<<j<<"\n";
        }
        else{
            cout<<"Case "<<i<<": Impossible\n";
        }
    }
    return 0;
}
