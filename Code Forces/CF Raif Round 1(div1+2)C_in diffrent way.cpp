
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, fl, i;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        l = s.length();
        fl = 0;
        for(i = 0; i < l; i++){
            if(fl && s[i] == 'B') fl--;
            else fl++;
        }
        cout << fl << endl;
    }
    return 0;

}
