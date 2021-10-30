#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, cnte, cnto;

    cin >> t;
    while (t--){
        cin >> n;
         cnte = cnto = 0;
        while(n--){
            cin >> a;
            if(a&1){
                cnto++;
            }
            else{
                cnte++;
            }
        }
            if(cnto & 1){
                cout << "YES" << endl;
            }
            else if(cnto && cnte) {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
    }
    return 0;
}
