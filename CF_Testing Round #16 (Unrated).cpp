#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a1, b1, a2, b2;

    cin >> t;
    while(t--){
            int ma1b1=0, ma2b2=0;

        cin >> a1 >> b1;
        cin >> a2 >> b2;



            ma1b1 = max(a1, b1);
         ma2b2 = max(a2,b2);

         if((ma1b1 == ma2b2) && (min(a1,b1) + min(a2,b2)) == ma1b1) {
            cout << "Yes" << endl;
         }
         else{
            cout << "No" << endl;
         }
         }
    return 0;
}
