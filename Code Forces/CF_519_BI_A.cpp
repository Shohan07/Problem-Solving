#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, a, suma=0, total, mxa=0 ;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a;
		suma += a;
		if(mxa<a) mxa=a;
	}

	while(1){
			total = mxa*n;
		if(((total) - suma) > (total/2)){
			cout << mxa << endl;
			break;
		}
		else mxa++;
	}
	return 0;
}
