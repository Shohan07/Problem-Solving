#include<bits/stdc++.h>
using namespace std;

char a[107][107];
int v[107][107], r, c, i, j, cnt, f ;

void check(int k, int l)
{
    int m, n;
    for(m=k-1; m<=k+1; m++){
        for(n = l-1; n<=l+1; n++){
            if((m>=r || n>=c) || (m<=r || n<=c)) continue;

            if(a[m][n] == '*') f++, v[m][n]=1;


        }
    }
}
int main()
{
   while(1){
      cin >> r >> c;
      if(r==0 && c==0) break;

      memset(v, 0, sizeof(v));

      for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
      }
      cnt = 0;
      for(i=0; i < r; i++){
        for(j = 0; j < c; j++){
            if(a[i][j]=='*' && v[i][j]==0){
                f = 0;

                check(i, j);
                if(f==1) cnt++;
            }
        }
      }
      cout << cnt << endl;
   }
return 0;
}
