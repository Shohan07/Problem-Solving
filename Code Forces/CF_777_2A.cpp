#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n % 3 == 0){
            for(int i = 0; i < n / 3; i++){
                cout << "21";
            }
        }
        else if(n % 3 == 1){
            for(int i = 0; i < n / 3; i++){
                cout << "12";
            }
            cout << "1";
        }
        else if(n % 3 == 2){
            for(int i = 0; i < n / 3; i++){
                cout << "21";
            }
            cout << "2";
        }
        cout << "\n";
    }
    return 0;
}
