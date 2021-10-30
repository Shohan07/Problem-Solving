#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    while(t--){
        cin >> x;
        int r = x % 4;
        if(r == 0) cout << "North\n";
        else if(r == 1) cout << "East\n";
        else if(r == 2) cout << "South\n";
        else if(r == 3) cout << "West\n";
    }
}
