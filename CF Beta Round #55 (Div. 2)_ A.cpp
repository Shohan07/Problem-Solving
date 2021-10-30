#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l, i, j, cntu = 0, cntl = 0;
cin >> s;
    l = s.length();
    for(i = 0; i < l; i++){
        if(s[i]>='A' && s[i]<='Z'){
            cntu++;
        }
        else{
            cntl++;
        }
    }
    if(cntu > cntl){
        transform(s.begin(), s.end(), s.begin(), :: toupper);
        cout << s << endl;

    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    return 0;
}
