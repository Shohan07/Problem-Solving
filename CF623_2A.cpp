#include<bits/stdc++.h>
using namespace std;
int main()
{
     unsigned long long int t,a, b, x, y, c, d, result;
     cin >> t;
     while(t--){
        cin >> a >> b >> x >> y;
       result = max(a*max(y,b-y-1), b*max(x,a-x-1));
       cout << result << endl;

     }
     return 0;
}
