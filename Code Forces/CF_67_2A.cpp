#include<bits/stdc++.h>
using namespace std;

int rz(int n){
    int a = 0;

    int mv = 1;

    while(n){
        int r = n % 10;
        n /= 10;
        if(r){
            a += r * mv;
            mv *= 10;
        }
    }
    return a;
}


int main()
{
   int a, b, c;

   cin >> a >> b;

   c = a + b;

   a = rz(a);
   b = rz(b);
   c = rz(c);
   if(a + b == c) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
