
#include<bits/stdc++.h>
using namespace std;


int main() {
    long long int arr[10005], i, caseno=0,cases, n;
    cin>>cases;
    while(cases--){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>n;
        for(i = 6; i <= n; i++){
            arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
        }

        cout<<"Case "<<++caseno<<": "<<(arr[n]%10000007)<<endl;
    }

    return 0;
}
