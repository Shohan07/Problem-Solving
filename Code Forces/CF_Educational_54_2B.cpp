#include<bits/stdc++.h>
using namespace std;

long long int div(long long int n)
{
    for(long long int i = 3; i*i <= n; i+=2){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}
int main()
{
    long long int n, cnt = 0;
    cin >> n;
    if(n % 2 != 0){
        n -= div(n);
        cnt++;
    }


   cout << cnt + n / 2 << endl;

    return 0;
}
