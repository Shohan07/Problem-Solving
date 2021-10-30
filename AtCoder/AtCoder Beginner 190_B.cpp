#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, p, t, t1, p1;

    cin >> n >> t >> p;
    bool f = 0;
    while(n-- > 0){
        cin >> t1 >> p1;
        if((t1<t) && (p1>p)) f = 1;
    }
    if(f) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
