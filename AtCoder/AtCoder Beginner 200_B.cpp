#include<bits/stdc++.h>
using namespace std;
long long convertBinaryToDecimal(long long n, long long base)
{
    long long decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(base,i);
        ++i;
    }
    return decimalNumber;
}
int main()
{
    long long base, a, b, ca, cb;
    cin >> base;
    cin >> a >> b;
    ca = convertBinaryToDecimal(a, base);
    cb = convertBinaryToDecimal(b, base);
    cout << ca*cb << "\n";
}
