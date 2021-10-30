#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int a[n+1], i, j, s = 0, ans = 0, cnt1, cnt2, cnt3, cnt4;
    cnt1 = cnt2 = cnt3 = cnt4= 0;

    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) cnt1++;
        else if(a[i] == 2) cnt2++;
        else if(a[i] == 3) cnt3++;
        else cnt4++;
    }
   // cout << cnt1 << " " << cnt2  << " "<< cnt3 << " " << cnt4 << endl;

  ans += cnt4;

  if(cnt3 <= cnt1){
    ans += cnt3;

    cnt1 -= cnt3;
    cnt3 = 0;

  }
  else if(cnt3 >= cnt1){
    ans += cnt1;

    cnt3 -= cnt1;

    ans += cnt3;
    cnt1 = 0;

  }
  ans += (cnt1/4);
  cnt1 = (cnt1 % 4);

  ans += (cnt2/2);

    cnt2 = (cnt2 % 2);

  // cout << "2%2" << 2%2 << " " << cnt2%2 << endl;
//cout << ans << " "  << cnt1 << " " << cnt2  << " "<< cnt3 << " " << cnt4 << endl;

  if(cnt2>0 && cnt1<=2){
    ans++;
     cnt1 = 0;
     cnt2 = 0;
  }

  else if(cnt2>0 && cnt1>2) {
    ans++;
    cnt2 = 0;

    cnt1 -= 2;
  }

  if((cnt1 % 4) != 0) ans++;

    cout << ans << endl;

    return 0;

}
