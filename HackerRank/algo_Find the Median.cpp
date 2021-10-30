
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;

    int arr[n+3];

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int j  = n/2;


    cout <<  arr[j] << endl;
    return 0;
}
