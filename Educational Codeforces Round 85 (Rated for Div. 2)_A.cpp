#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, p, c, x, y;

    cin >> t;
    while(t--){
        cin >> n;
        bool f = true;
        p = 0, c = 0;
        for(int i = 0; i < n; i++){
            cin >> x >> y;

            if(x < p || y < c || x-p < y-c){
                f = false;
            }
            p=x, c=y;
        }
        if(f)
            cout << "YES" << endl;

        else
            cout << "No" << endl;


    }
     return 0;
}
