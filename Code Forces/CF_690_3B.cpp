#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        bool possible = false;

        for(int first = 0; first <= 4; first++){
            int second = 4 - first;

            if(s.substr(0,first) + s.substr(n - second) == "2020"){
                possible = true;
               cout <<  s.substr(n - second) << endl;
            }

        }
        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}
