#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, j, v, p,  m=0, i = 0, total=0;


    cin >> n >> x;
    j=n;
    vector <int>a;
    while(j--){

       cin >> v >> p;
       a.push_back(v*p);
    }
   x = x*100;
    for(i=0; i < n; i++){
        total += a[i];
        if(total > x) {
            cout << i+1;
            m = 1;
            break;
        }
    }

    if(m==0) cout << "-1\n";
    return 0;
}
