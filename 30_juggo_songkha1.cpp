#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    unsigned long int n, i;
    cin >> T;
    while (T--){
        unsigned long int sum = 1, sqrt_n;
        bool t = true;
        cin >> n;
        sqrt_n = sqrt(n);
        for(i = 2; i <= sqrt_n; i++){
                //cout << sqrt_n <<endl;
            if(n % i == 0){
                sum += i;
                sum += (n/i);
                if(sum > n){
                    t = false;
                    break;
                }
            }
        }
       //cout << sum << endl;
        if(sum == n){
            cout << "Yes, " << n << " is a perfect number!" << endl;
        }
        else{
            cout << "No, " << n << " is not a perfect number!" << endl;
        }

    }
    return 0;
}
