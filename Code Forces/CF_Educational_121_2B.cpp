#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, sum;
    string s;
    cin >> t;

    while(t--){
        cin >> s;
        bool f = 0;
        for(i = s.size() - 1; i > 0; i--){
            sum = s[i] - '0' + s[i - 1] - '0';
            if(sum > 9){
                s[i - 1] = sum / 10 + '0';
                s[i] = sum % 10 + '0';
                f = 1;
                break;
            }
        }
        if(f) cout << s << "\n";
        else {
            sum = s[0] - '0' + s[1] - '0';
            s.erase(s.begin());
            s[0] = sum + '0';
            cout << s << "\n";
        }
    }

}
