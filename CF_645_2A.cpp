#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t, n, m, p;
    cin >> t;
    while(t--){
        cin >> n >> m;
        p =0;
        p = n*m;
        if(p ==1){
           cout << 1 <<endl;
        }

       else if(p %2 == 0)
            cout << p/2 <<endl;

        else{
            int ans = p/2;
            cout << ans+1 << endl;
        }

    }


    return 0;
}
