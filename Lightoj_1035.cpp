#include<bits/stdc++.h>
using namespace std;

void primepw(int p, int num)
{
	int pw = 0;
	while(num>0){
		num = num /p;
		pw = pw+num;
	}
	cout << " " << p << " (" << pw << ")";
}
int main()
{
	int ara[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
	            31, 37, 41, 43, 47, 53, 59, 61, 67,
	            71, 73, 79, 83, 89, 97, 101};
	int i,j,p,num,t;
	cin >> t;
	for(i=1; i<=t; i++){
		cin>>num;
		cout<< "Case " << i << ": " << num << " =";
		for(j=0; ara[j]<=num; j++){
			p = ara[j];
			if(j!=0){
				cout << " *";
			}
			primepw(p,num);
		}
		cout << endl;
	}
	return 0;
}
