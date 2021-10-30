
#include<bits/stdc++.h>
using namespace std;
int arr[5];
map<int, int>mp;

int main()
{
    int t, n, r, i, j, sum, sm, f;
    cin >> t;
    while(t--){
        sm = 500007, f = 0;
        memset(arr, 0, sizeof(arr));
       // v.clear();
        mp.clear();
        cin >> n;
        for(int k = 1; k <= n; k++){
          for(i = 0; i < 5; i++){
            cin >> arr[i];
           // v.push_back(r);
          }
          sort(arr, arr+5);
          sum = arr[0]+arr[1]+arr[2];
         // cout << sum << " " << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
          if(sum <= sm){
            sm = sum;
            j = k;
            f = 1;
            mp[sm]++;
            //cout <<sum << " " <<  mp[sm] << " ";
          }

        }
        if(mp[sm] == 1)cout << j << "\n";
        else cout << -1 << "\n";
    }
}
