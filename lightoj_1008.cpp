
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j = 1;
	long long int s, n, t, x, y;
	 cin >> t;
	 while(t--){
		cin >> s;
		n = ceil (sqrt((double)(s)));
		if(n*n-s < n){
			x = n, y = n*n-s+1;
		}
		else{
			x = -n*n+2*n+s-1, y = n;
		}
		if(n&1){
			swap(x,y);
		}
		 cout<< "Case "<<j<< ':'<< ' '<<x<< ' '<<y<< '\n';
        j++;
    }
    return 0;
    }
