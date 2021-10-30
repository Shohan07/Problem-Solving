#include<bits/stdc++.h>
using namespace std;
int arr[10007][10007];
int nCr(int n, int r)
{
    if(arr[n][r] != -1) return arr[n][r];
    if(r > n) return 0;
    if(r == 0 || n == r)return 1;;
    else if(r == 1) return n;
    return arr[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
}

int main()
{
    int n, r;
    while(cin >> n >> r){
        memset(arr, -1,sizeof(arr));
        cout << nCr(n, r) << "\n";
    }
}
