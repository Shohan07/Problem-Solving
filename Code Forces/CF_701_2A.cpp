#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a, b, cnt;

    cin >> t;
     while(t--){
            cnt = 0;
        cin >> a >> b;
bool f = 0;
        while(a>0){

       if(a==1) b++;

       else if((a%b)==0)b++;

       else if((a%b) != 0) a /= b;

       cnt++;



     }
     cout << cnt << "\n";
     }
    return 0;
}
