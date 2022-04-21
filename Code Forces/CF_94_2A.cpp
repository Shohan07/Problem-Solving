#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, even = 0, odd = 0, t;
    cin >> n;
    t = n;
    while(t--){
        cin >> a;
        if(a&1)odd++;
    }
    if(odd&1){

      cout << odd << "\n";
    }

    else{
        even = n - odd;
        cout << even << "\n";
    }
    return 0;
}
