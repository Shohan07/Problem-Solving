#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, i = 1, ch = 0, bi = 0, ba = 0;
    while(n--){
        cin >> a;
        if(i % 3 == 1) ch += a;

        else if(i % 3 == 2) bi += a;

        else ba += a;
        i++;
    }
    int mx = max(ch, max(bi, ba));

    if(mx == ch) cout << "chest\n";
    else if(mx == bi) cout << "biceps\n";
    else cout << "back\n";
}
