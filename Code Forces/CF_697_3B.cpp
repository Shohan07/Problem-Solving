#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, k, j, d, r, l;

    cin >> t;

    while(t--){
        cin >> n;
        j=0;

        l = n %2020;
        k = ((n-(l*2021)));
        if((k >= 0) && (k%2020 == 0)) j =1;

        if(j) cout << "YES\n";
        else cout << "NO\n";
    }
return 0;
}
