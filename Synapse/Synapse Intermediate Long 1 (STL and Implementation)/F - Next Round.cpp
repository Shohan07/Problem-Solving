#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, cnt=0, arr[55]={0};

    cin >> n >> k;

    for(i=0; i < n; i++){
        cin >> arr[i];
    }
    for(i=0; i < n; i++){
        if(arr[i]>0){
            if(arr[i] >= arr[k-1])cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
