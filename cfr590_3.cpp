#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, n;

    double sum;

    cin>>q;
    while(q--)
    {
        cin>>n;
        int arr[n];
        sum = 0;
        for(int i = 0; i<n; i++){
        cin>>arr[i];
       sum+=arr[i];
    }
    cout<<(sum+n-1)/n<<endl;
    }
    return 0;
}
