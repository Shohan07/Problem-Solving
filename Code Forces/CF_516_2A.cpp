#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[4], ans, l;

	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr+4);

	l = arr[2] - (arr[0]+arr[1]);

	if(l>0){
		cout << l+1 << endl;
	}
	else if(l==0){
		cout << "1" << endl;
	}
	else{
		cout << "0" << endl;
	}
	return 0;
}
