#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, r;
    cin >> t;
    while(t--){
        cin >> r;
        if(r >= 1900)cout << "Division 1\n";
        else if(r >= 1600 && r <= 1899) cout << "Division 2\n";
        else if(r >= 1400 && r <= 1599)  cout << "Division 3\n";
        else if(r <= 1399) cout << "Division 4\n";
    }
}