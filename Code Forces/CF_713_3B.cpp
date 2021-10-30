#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k, r, c, r1, c1, r2, c2, r3, c3, r4, c4;

    cin >> t;
    while(t--){
        cin >> n;
        char a[n+7][n+7];
        r1 = c1 = r2 = c2 = r3= c3= r4= c4=0;
        bool f = 1;
        for(r = 0; r < n; r++){
            for(c = 0; c < n; c++){
                cin >> a[r][c];
                if(a[r][c]=='*'){
                    if(f){
                        f=0;
                        r1 = r;
                        c1 = c;
                    }
                    else{
                        r2 = r;
                        c2 = c;
                    }
                }
            }
        }
        if(r1 == r2){
            if(r1<n-1){
            r3 = r1+1, c3 = c1;
            r4 = r2+1, c4 = c2;
            }
            else{
            r3 = r1-1, c3 = c1;
            r4 = r2-1, c4 = c2;
            }
        }
        else if(c1 == c2){
            if(c1<n-1){
                c3 = c1+1, r3 = r1;
                c4 = c2+1, r4 = r2;
            }
            else {
                c3 = c1-1, r3 = r1;
                c4 = c2-1, r4 = r2;
            }
        }
        else{
            c3 = c1, r3 = r2;
            c4 = c2, r4 = r1;
        }
        a[r3][c3]='*';
        a[r4][c4]='*';
        for(r = 0; r < n; r++){
             for(c = 0; c < n; c++){
                cout << a[r][c];
             }cout << "\n";
        }//cout << "\n";

    }
}
