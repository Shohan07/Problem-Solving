#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n, i, j,ara[11], sum  = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> ara[i];
        sum += ara[i];
    }
    if(n == 1 || n == 2 && ara[0] == ara[1] ){
        cout << "-1" << endl;
    }
    else{
        for(i = 0; i < n; i++){
            if(ara[i] < sum/2){
                cout << 1 << endl << i+1 << endl;
                break;
            }
            else if(sum % 2 != 0 && ara[i] == sum/2){
                cout << 1 << endl << i+1 << endl;
                break;
            }
            }

        }

    return 0;
}

