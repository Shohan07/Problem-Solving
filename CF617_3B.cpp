#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
      unsigned long long  int s , d, r;
     unsigned long long int total = 0;
        cin >> s;
        if (s < 10){
            cout << s << endl;
        }
        else{
                total = s;
            while(s > 9){
                d = s / 10;
               r = s % 10;
                total += d;
                s = d+r;
            }

            cout << total <<endl;
        }
    }
    return 0;
}
