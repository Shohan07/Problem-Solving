#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
            --n;
        cout << n*4 << endl;
    }
     else {
            cout << n*4 << endl;
     }
    return 0;
}
