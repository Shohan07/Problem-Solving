#include <cstdio>
#include <map>
#include <algorithm>
#include<iostream>
using namespace std;
map <long long ,  long long int> dp;

long long int mxc(long long int n)
{
    if(n < 4) return n;

    if(dp[n] != 0) return dp[n];
  //  dp.find(n) != dp.end())
    long long int e = mxc(n/2)+ mxc(n/3) + mxc(n/4);
    if(e > n) dp[n] = e;
    else dp[n] = n;

    return dp[n];
}
int main()
{
    long long int n;
    while(cin >> n){

        cout << mxc(n) << endl;
    }
    return 0;
}
