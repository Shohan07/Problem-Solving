#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, j, a, b, s = 0, total = 0;
    cin >> n;
    a = n;
    while(a/10 != 0){
        a = a/10;
        s = s+9;
        total = total *10 + 9;
    }
    b = n-total;
    while(b>0){
        s = s + b%10;
        b = b /10;
    }
    cout << s <<endl;
    return 0;
}
