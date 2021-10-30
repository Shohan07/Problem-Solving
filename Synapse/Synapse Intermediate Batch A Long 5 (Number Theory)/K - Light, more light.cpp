#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int t, n, x;

    while(1){
        cin >> n;
        if(n==0)break;
        x = sqrt(n);
        if(x*x == n)cout <<"yes\n" ;
        else cout <<"no\n";
    }
}
