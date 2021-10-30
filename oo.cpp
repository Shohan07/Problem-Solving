
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, r, c, s, f, i,  j=0 ,ans, d;
     string a, b;
     vector<string>v;
   cin >> n;
 long long P[n+7];

    i=0, ans = 0;
    for(j=0; j < n; j++){
      cin >> a;
        cin >> r >> c >> s >> f;
        P[j] = r+ (10*c)+(6*s)+(4*f);


            if ( P[j]<P[j+1]  &&  j<n){
   long long diff= P[j+1] - P[j];
    P[j] = P[j] + ceil(diff/2);
}


           if(P[j]>ans){
            ans = P[j];
           b=a;
           }


    }
    cout << b << " " << ans << "\n";
    return 0;
}
