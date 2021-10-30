#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,l;
    string s;
    bool f = false;
    getline(cin, s);
    l = s.length();
    for(i = 0; i < l; ){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=3;
            if(f){
                cout << " ";
                f=false;
            }
            continue;
        }
        else{
            cout << s[i];
            i++;
            f=true;
        }
    }
    cout << endl;
    return 0;
}
