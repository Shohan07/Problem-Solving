#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "hello", s2;
    int i, j, l, f = 0;
    cin >> s2;

    l = s2.length();
    j = 0;
    for(i = 0; i < l; i++){
        if(s2[i] == s1[j]){
            j++;
        }
        if(j > 4){
            cout << "YES" << endl;
            f = 1;
            break;
        }
    }
    if(!f) cout << "NO" << endl;
    return 0;
}
