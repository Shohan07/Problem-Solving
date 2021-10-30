#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b, c, d;

    cin >> t;

    while(t--){
        cin >> n >> a >> b >> c >> d;



        int  L = n * (a-b), R = n * (a+b);
        if(L > c+d || R < c-d)
            cout << "No" << endl;

        else
            cout << "Yes" << endl;
    }
    return 0;

}
