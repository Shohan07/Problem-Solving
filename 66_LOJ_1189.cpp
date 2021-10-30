#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t, n, i, j,  f[25];
   int k;
    f[0] = 1;
    for(i = 1; i <= 20; i++){
        f[i] = i*f[i-1];
    }

    cin >> t;
    for(j = 1; j <= t; j++){
            stack<int>s;
        cin >> n;

        for(k = 20; k >= 0; k--){
            if(f[k] <= n){
                n -= f[k];
                //cout<<i<<endl;
                s.push(k);

            }
        }
    if(n == 0){
        cout << "Case " << j << ": ";
        while(s.size() != 1){
            cout << s.top() << "!" << "+";
            s.pop();
        }
        cout << s.top() << "!" << endl;
        s.pop();
    }
    else{
        cout << "Case " << j << ": impossible" << endl;
    }
    }
    return 0;
}
