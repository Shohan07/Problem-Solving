#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;

    cin >> t;
    while(t-- ){
        cin >> n;
        int arr[105]={0}, mx = 1, i;
        while(n--){
            cin >> i;
            arr[i]++;
        }
        mx = max(mx, (*max_element(arr, arr + 105) ));
        cout << mx << "\n";
    }
    return 0;
}
