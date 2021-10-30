
#include<bits/stdc++.h>
using namespace std;

int t, n, i, j, a, b, f;

bool isPrime(int v){
    for(i = 2; i * i <= v; i++){
        if(v % i == 0) return 0;
    }
    return 1;
}
int sol(int n)
{
     if(n == 1){
          return  f = 2;

        }
        else if(n==2 || n%2){
           return f = 1;

        }
        a = n;
        b = 1;
        while(a % 2 == 0){
            a /= 2;
            b *= 2;
        }
        if(a == 1){
            return f = 2;
        }
        if (b > 2){
            return f = 1;
        }
        if(isPrime(a)){
            return f = 2;
        }
        return f =1;

}
int main()
{
    int t, n, i, j, a, b, f;
    cin >> t;
    while(t--){
        cin >> n;

        int ans = sol(n);
        if(ans == 1){
            cout << "Ashishgup\n";
        }
        else cout << "FastestFinger\n";
    }
}
