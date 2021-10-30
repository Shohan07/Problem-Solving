#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, a, j, k, n;
    string s;
    cin >> t;
    for(int i = 1; i <= t; i++){


        cin >> s >> a;
        int l = s.size();
         if(s[0] == '-'){
            j = 1;
         }
         else {
            j = 0;
         }
         if(a < 0){
            a = a*(-1);
         }
         n = 0;
        for(k = j; k < l; k++){
            n = n*10+(s[k]-'0');
            n = n % a;
        }
        if (n == 0){
            cout << "Case " << i << ": " <<"divisible"<<endl;
        }
        else{
             cout << "Case " << i << ": " <<"not divisible"<<endl;
        }

    }
    return 0;
}
