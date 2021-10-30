#include<bits/stdc++.h>
using namespace std;
 long long a, b, c, x, y, ans, i, j, t;
int main()
{
    cin >> t;
    while(t--){
            ans = x = y = 0;
        cin >> a >> b >> c;

       // if(a<b){
         x = pow(10, a-1);

         if(a==b && a==c)y=x;
         else{
            y = pow(10,b-1) + pow(10,c-1);
         }
       // }
        cout << x << " " << y << "\n";
    }
}
