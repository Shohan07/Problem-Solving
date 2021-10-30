#include<bits/stdc++.h>
using namespace std;
int a[10000];

int calc(int n)
{
    if(a[n] != -1)return a[n];
    if(n == 0) return 0;
    else if(n == 1) return 1;
   // if(n <= 1) return n;
    a[n] = calc(n-1) + calc(n-2);
    return a[n];
}

int main()
{
    int n;
    cin >> n;
    memset(a, -1, sizeof(a));
    cout << calc(n) << "\n";
}
