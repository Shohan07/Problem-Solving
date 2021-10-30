#include<bits/stdc++.h>
using namespace std;


int main()
{
     long long int q, arr[3], ans, sum, i = 0;
    cin>>q;
    while(q--){
        cin>>arr[0]>>arr[1]>>arr[2];

       sort(arr,arr+3);

       arr[0] += 1, arr[2] -= 1;
       ans = arr[2] - arr[0];
      ans = max(i, ans);
       ans += max(i, (arr[1] - arr[0]) + (arr[2] - arr[1]));
       cout << ans << endl;

}
return 0;
}
