#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, r, g, b, sum;
    cin >> n >> k;

    r = ceil((n*2*1.0)/k);
    g = ceil((n*5*1.0)/k);
    b = ceil((n*8*1.0)/k);
    cout << r+g+b;


}
