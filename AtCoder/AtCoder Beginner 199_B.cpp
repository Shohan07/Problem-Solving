#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, l=0, s=100000,x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(l<a)l=a;
    }
    for(int i = 0; i < n; i++){
        cin >> b;
        if(b<s)s=b;
    }
    x = s-l+1;
    if(x>0)cout<< x << "\n";
    else cout << 0 << "\n";
    return 0;
}
