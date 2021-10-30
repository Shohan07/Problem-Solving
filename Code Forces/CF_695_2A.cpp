#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        cout << 9;
        n--;
        if(n>0){
            cout << 8;
            n--;
        }
        if(n>0){
            cout << 9;
            n--;
        }
        for(i = 0; i < n; i++){
            cout << i % 10;

        }
        cout << "\n";
    }
    return 0;
}
