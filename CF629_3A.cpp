#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, reminder, ans  ;
    cin >> t;
    while(t--){
        cin >> a >> b;
        reminder = a%b;
        if(reminder != 0){
            ans = b-reminder;
        }
        else{
            ans = reminder;
        }
        cout << ans << endl;
    }
    return 0;
}
