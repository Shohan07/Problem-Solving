
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;

    cin >> t;
    while(t--){
        cin >> n;
        int a[n+1], sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int i = 0; i < n-1; i++) cout << a[i] << " ";
            cout << a[n-1] << endl;
        }
    }
    return 0;
}
