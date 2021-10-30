#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, t;
   cin >> t;

   while(t--){
         cin >> n;
         if( n == 1)cout << 0 << " " << n << "\n";
         else if(n < 0){
           cout << n << " " << abs(n+1) << "\n";
         }
         else cout << "-"<<n-1 << " " << n << "\n";
         
   }
  
}