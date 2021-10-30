#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        char name[n][100];
        int ara[n], l, w, h, mx, mn, j;
         int maximum = 0, minimum = 900000000;
        for(j = 0; j < n; j++){
            cin >> name[j] >> l >> w >> h ;
            ara[j] = l*w*h;
            if(ara[j] > maximum){
                maximum = ara[j];
                mx = j;
            }
            if(ara[j] < minimum){
                minimum = ara[j];
                mn = j;
            }
        }
        if(mx == mn){
            cout << "Case " << i << ": " << "no thief" << endl;
        }
        else{
            cout << "Case " << i << ": " << name[mx] << " took chocolate from " << name[mn] <<endl;
        }
    }
}
