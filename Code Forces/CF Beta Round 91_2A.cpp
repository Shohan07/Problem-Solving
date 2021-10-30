#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, f=1, ara[]={4, 7, 47, 74, 77, 44, 444, 474, 447, 744, 777, 747, 774, 477};

    cin >> n;

    for(i = 0; i < 14; i++){
        if(n%ara[i] == 0){
            cout << "YES" << endl;
            f=0;
            break;
        }
    }
    if(f){
        cout << "NO" << endl;
    }

    return 0;
}
