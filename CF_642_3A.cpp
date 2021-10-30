#include<bits./stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, n, m, ans;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n > 2){
            cout << m*2 << endl;
        }
        else if(n == 2){
            cout << m << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}
