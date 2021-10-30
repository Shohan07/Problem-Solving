#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int px, py, t, u, d, r, l, x , y, i, len ;

    cin >> t;

    while(t--){
            x = 0, y = 0;
            u=d=r=l=0;
        cin >> px >> py;
        string s;
        cin >> s;
        len = s.size();
        for( i= 0; i < len; i++){
            if(s[i] == 'R') r++;
            else if(s[i] == 'L') l++;
            else if(s[i] == 'U') u++;
            else if(s[i] == 'D') d++;
        }
        x = abs(px);
        y = abs(py);
        if((px<0)  && (py<0)){
            if((x <= l) && (y <= d)) cout << "YES\n";
            else cout << "NO\n";
        }
        else if((px<0) && (py>0)){
            if((x <= l) && (py <= u)) cout << "YES\n";
            else cout << "NO\n";
        }
        else if((px>0) && (py<0)){
            if((px <= r) && (y <= d)) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            if((px <= r) && (py <= u))  cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
