#include<bits/stdc++.h>
using namespace std;

bool prime(long long int n)
{
    int i,c=1;
     for(i=2;i*i<=n;i++){
        if(n%i==0){
            c=0;
            return false;
            }
    }
    if(c==1)
        return true;
}

int reverse_number(long long int n)
{
	long long int reversedNumber = 0, remainder;
	 while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    //cout << reversedNumber << endl;
    return reversedNumber;
}
int main()
{

	long long int n,n1,rn, remainder;

	while(cin >>n){

		if(prime(n)){
			rn = reverse_number(n);
    if(prime(rn) && rn!=n){
		cout << n << " is emirp." << endl;
    }
    else{
		cout << n << " is prime." << endl;
    }
		}

	else{
			cout << n << " is not prime." << endl;
		}
	}
	return 0;
}
