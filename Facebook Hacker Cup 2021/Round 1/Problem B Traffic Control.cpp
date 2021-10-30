#include<bits/stdc++.h>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t, n, m, a, b, sd;


    cin >> t;
    for(int k = 1; k <= t; k++){
            bool f = 0, p = 0;
        cin >> n >> m >> a >> b;

     cout << "Case #" << k << ": ";
     sd = n+m-1;
     if(a<sd || b<sd){
        cout << "Impossible\n";
        continue;
     }
     else cout << "Possible\n";

     cout << a - (n+m-2) << " ";
     for(int r = 0; r < 1; r++){
        for(int c = 1; c < m-1; c++){
            cout << 1 << " ";

        }cout << 1 << "\n";
     }
     for(int r = 1; r < n-1; r++){
        for(int c = 0; c < m-1; c++){
            cout << 1000 << " ";
        }
        cout << 1 << "\n";
     }

     cout << b - (n+m-2) << " ";
     for(int r = 0; r < 1; r++){
        for(int c = 1; c < m-1; c++){
            cout << 1 << " ";

        }cout << 1 << "\n";
     }
     }

    }

