#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, d, n=0;

    cin >> x;

    d = x/100;
    d++;
    n = d*100;
    n = n-x;

    cout << n << "\n";
    return 0;
}
