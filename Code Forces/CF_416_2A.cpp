#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int i = 1, j = 2;
    while(a>-1 && b >-1){
        a -= i;
        b -= j;
        i += 2, j += 2;
    }
    bool f = 0;
    if(a < 0 && b < 0) f = 1;
    else if(a < 0) f = 1;
 //cout << a << " " << b << "\n";
    if(f)cout << "Vladik\n";
    else cout << "Valera\n";
}
