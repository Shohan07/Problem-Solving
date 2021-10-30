
#include<bits/stdc++.h>
using namespace std;

long long numOfDigit(long long a){
    long long cnt = 0;
    while(a){
        a /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n, sum, a, b, c, i, j=0, k;

   while(cin >> n && n){
        sum = 0;
        for(i = 0; i < n; i++){
        cin >> k;
        sum += k;
    }
    bool isneg = false;
    if(sum < 0) {
            isneg = true;
            sum *= -1;
    }
    a = sum / n;
    b = sum % n;
    c = n;

    cout << "Case " << ++j << ":\n";
    if(b == 0){
        if(isneg) cout << "- ";
        cout << sum / n << "\n";
        continue;
    }
    long long gcd = __gcd(c, b);
    b /= gcd;
    c /= gcd;

    long long diga = numOfDigit(a);
    long long digc = numOfDigit(c);

    if(isneg) cout << "  ";
    cout << string(diga, ' ') << setw(digc) << b << "\n";
    if(isneg)cout << "- ";
    if(a) cout << a;
    cout << string(digc, '-') << "\n";
    if(isneg) cout << "  ";
    cout << string(diga, ' ') << setw(digc) << c << "\n";
   }
}
