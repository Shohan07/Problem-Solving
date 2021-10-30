#include<bits/stdc++.h>
using namespace std;
int n, m, k,p, inp[35][35], ans[35];

void input()
{
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            cin >> inp[i][j];
        }
    }
    cin >> p;
    for(int i = 0; i < p; i++){
        cin >> ans[i];
    }
}

bool solve()
{
    int i, j, x;

    for(i = 0; i < n; i++)
    {
        bool ok = false;
        for(j = 0; j < k ; j++){
            int wish = inp[i][j];
            bool nai = true;
            bool ase = false;
            for(x = 0; x < p; x++){
                if(abs(wish) == ans[x]){
                    nai = false;
                    ase = true;
                }
            }
            if(wish < 0 && nai) ok = true;
            if(wish > 0 && ase) ok = true;
        }
        if( ok == false) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        input();
        if(solve()){
            cout << "Case " << i << ": Yes"<< endl;
        }
        else{
            cout << "Case " << i << ": No"<< endl;
        }
    }
}
