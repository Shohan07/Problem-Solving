#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long  int t, sd, ed, sy, ey, i, j, cnt = 0, k,nsy;
   string sm, em;
char c;
  // scanf("%d ",&t);
   cin >> t;

   for(i = 1; i <= t; i++)
   {

         cin >> sm >> sd  >> c >> sy;

         cin >> em >> ed >> c >> ey;

       if(((sm.compare("January")) !=0) && ((sm.compare("February")) != 0))
          {
              sy++;
          }
        if((em.compare("January") == 0 ) || ((em.compare("February") == 0) && (ed < 29)) ){
            ey--;
        }


        /* cnt = 0;
        for(j = sy, nsy= sy; j <= ey; j++){
            if((j%4 == 0 && j%100 != 0) || (j%400 == 0)){
                cnt++;
                nsy = j;
                break;
            }
        }

        k = ey - nsy;
        //cout << nsy<<" "<<k << endl;
        k = k /4;
        //cout << k << endl;
        cnt += k;*/


        //cout <<sm << sy << " " << ey <<endl;
         cnt = ey/4 - (sy-1)/4;
        cnt -= ey/100 - (sy-1)/100;
        cnt += ey/400 - (sy-1)/400;

        cout << "Case " << i << ": " << cnt << endl;
   }

   return 0;
}
