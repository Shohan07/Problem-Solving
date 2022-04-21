#include<bits/stdc++.h>
using namespace std;

void run_case(){
    int n;
    cin >> n;

    for(int a = 2; ; a++){
        int b = n - a - 1;
        if(a != b && __gcd(a, b) == 1){
            cout << a << " " << b << " " << 1 << "\n";
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        run_case();
    }
}
