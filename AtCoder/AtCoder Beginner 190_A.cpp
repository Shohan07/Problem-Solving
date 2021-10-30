#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i, j;

    cin >> a >> b >> c;

        if(c==0){
            if(a > b) cout << "Takahashi\n";
            else cout << "Aoki\n";
        }
        else {
            if(b>a) cout << "Aoki\n";
            else cout << "Takahashi\n";
        }

}
