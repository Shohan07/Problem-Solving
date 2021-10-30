#include<bits/stdc++.h>
using namespace std;

int n, ara[12][3], state[12], i;
int gcd(int a, int b)
{
    if(a % b == 0) return b;

    else return gcd(b,a%b);
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

bool update(){
    int cnt = 0;
    for(i = 0; i < n; i++){
        if(state[i] <= ara[i][0]) cnt++;
    }
    if(cnt == n) return true;

    for(i = 0; i <= n; i++){
        if(state[i] == ara[i][0]+ara[i][1] || (state[i] == ara[i][0] && n <=cnt*2)) state[i] = 1;
        else state[i]++;
    }
    return false;
}


int main()
{
    int l, t, tc = 0;
    while(1){

        cin >> n;
        if(n == 0) break;
        l = 1;
        tc++;
        for(i = 0; i < n; i++){
            cin >> ara[i][0] >> ara[i][1] >> ara[i][2];
            state[i] = ara[i][2];
            l = lcm(l, ara[i][0]+ara[i][1]);
        }
        bool found;
        for(t = 1; t <= l; t++ ){
            found = update();
            if(found){
                cout << "Case " << tc << ": " << t << endl;
                break;
            }
        }
        if(!found) {
            cout << "Case " << tc << ": -1" << endl;
        }
    }
    return 0;
}
