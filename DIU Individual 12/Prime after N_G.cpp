
#include<bits/stdc++.h>
using namespace std;

int check(long long int n)
{
    if(n==2) return 1;

    for(long long int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    long long int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        n++;
        while(1){
            if(n&1){
                if(check(n)){
                    cout << n << endl;
                    break;
                }
            }
            n++;
        }
    }
    return 0;
}
