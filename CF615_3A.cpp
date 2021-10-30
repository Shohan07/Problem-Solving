#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int ara[4], n , a, b;

    cin >> t;
    while(t--){
        cin >> ara[0] >> ara[1] >> ara[2] >> n;

        sort(ara, ara+4);
        a = ara[2] - ara[0];
        b = ara[2] - ara[1];

        if(ara[0] == ara[1] == ara[2]){
            if(n % 3 == 0){
                cout <<" YES" <<endl;
                continue;
            }
            else {
                cout << "NO" << endl;
                continue;
            }
        }


            if(n >= a){
            ara[0] += a;
            n -=a;
            }
            else{
            cout<< "NO"<< endl;
            continue;
            }


            if(n >= b){
                ara[1] += b;
                n -= b;
            }
            else{
                cout<< "NO" << endl;
                continue;
            }

        if(n%3 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
