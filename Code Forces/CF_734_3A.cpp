#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n, c1, c2;
    cin >> t;
    while(t--){
        cin >> n;
        c2 = n / 3;
        if(n % 3 == 2) c2++;
        c1 = n - (c2*2);
        cout << c1 << " " << c2 << "\n";
    }
}
