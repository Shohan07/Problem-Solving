#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int T, X, N, i;
    cin >> T;
     while(T--){
        cin >> X >> N;


        if(X > N)
            cout << "Invalid!" << endl;
        else{
        for(i = X; i <= N; i += X ){

            cout << i << endl;

        }
        }
     }
     return 0;
}
