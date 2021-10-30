#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n, t, k, i,j,  sum, rem;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long arr[10007]={0};

        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        j=0;
        while(arr[j]<0 && j<n)
            j++;

        sum = 0;
        if(j>=k){
            for(i=0; i<n; i++){
                if(i<k) sum-=arr[i];
                else sum+=arr[i];
            }
        }
        else{
            for(i=0; i<j; i++){
                arr[i] =- arr[i];
            }
            rem = k-j;
            sort(arr, arr+n);

            for(i=1; i<n; i++)sum += arr[i];

            if(rem&1) sum -= arr[0];
            else sum += arr[0];
        }
        cout <<  sum << "\n";
    }
    return 0;
}
