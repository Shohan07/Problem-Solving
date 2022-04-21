#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, i, sum = 0;
    vector<int>v(7);

    cin >> n;
     d = 0,i = 0;
    for(auto &t : v){
        cin >> t;
    }

    d = 0, i = 0;
    while(n > 0){
       if(i == 7)i=0;

        n -= v[i];

        d++, i++;
        if(d == 8)d = 1;
        // cout << d  << " " << n << "\n";
    }

    cout << d << "\n";
}
