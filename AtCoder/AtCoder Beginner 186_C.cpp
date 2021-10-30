#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int ret = 0;
    for(int i = 1; i <= n ; i++){
        bool ok = true;
        int a = i;
        while(a){
            if(a % 10 == 7) ok = false;
            if(ok==false){  break;}
            a /= 10;
        }
        if(ok==false){  continue;}
        a = i;
        while(a){
            if((a % 8) == 7) ok = false;
            if(ok==false){  break;}
            a /= 8;
        }
        if(ok) ret++;
    }
    return ret;
}

int main()
{
    int n;
    cin >> n;
    auto ans = solve(n);
    cout << ans << endl;
    return 0;
}

