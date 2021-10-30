#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[207], sum1 = 0, sum2 = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        if(i < n/2)sum1 += arr[i];
        else sum2 += arr[i];
    }
    if(sum1 != sum2) cout << "YES\n";
    else cout << "NO\n";


}
