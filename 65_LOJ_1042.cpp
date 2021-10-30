#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, mod, i ,j;
    cin >> t;
    for(j = 1; j <= t; j++){
        cin >> n;

        vector<int>v;
        v.clear();

        while(n>=2){
           mod = n % 2;
           v.push_back(mod);
           n = n/2;
        }
        v.push_back(n);
        v.push_back(0);

        reverse(v.begin(), v.end());
        next_permutation(v.begin(), v.end());

        int sz = v.size();
        int decimal = 0;
        int exp = sz-1;
        for(i = 0; i < sz; i++){
            if(v[i] != 0){
                decimal += (int)pow(2,exp);
            }
            exp--;
        }
        cout << "Case " << j << ": " << decimal << endl;
    }
}
