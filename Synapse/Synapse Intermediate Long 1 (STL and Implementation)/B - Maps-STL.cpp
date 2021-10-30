#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, t, y;
    string  nm;
    map<string, int>mp;

    cin >> q;
     while(q--) {
        cin >> t >> nm;

        if(t == 1){

           cin >> y;
           mp[nm] += y;
        }
        else if(t == 2){
            mp.erase(nm);
        }
        else{

             cout << mp[nm] << "\n";
        }
     }
     return 0;
}
