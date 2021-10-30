#include<bits/stdc++.h>
using namespace std;

int main()
{
    int long long a,b,i,sum=0,f=0,max,val;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
 if(sum%2==0)
 {
    f=1;
 }
 max= *max_element(arr,arr+a);
 val=(sum-max);

 if(f==1&&val>=max)
 {
    cout<<"YES"<<endl;
 }
 else
    cout<<"NO"<<endl;

    return 0;


}
