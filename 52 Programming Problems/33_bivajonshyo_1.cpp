#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, a, b, c, s, d;

    cin >> t;
    while(t--){

        cin >> a >> b >> c;
      s = 0;

     if(a % c == 0) s = a;
     else {
        if(a < c) s = c;
        else{
            d = a/c;
            s = (d*c) + c;
        }
     }

     for(s; s <= b; s += c){
        cout<< s << endl;
     }
     cout << endl;
    }
    return 0;
}














































































































































































