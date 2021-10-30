
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, j;
    char c ;
    getline(cin, s);
    for(i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||  s[i] == 'y' ||
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||  s[i] == 'Y' || s[i] == ' ' )
           continue;
    else if(s[i] > 64 && s[i] < 91){
            s[i]=s[i]+32;
        cout << "." << s[i];
    }
    else if(s[i] > 96 && s[i] < 123){
        cout << "." << s[i];
    }
    }
    cout << endl;
    return 0;
}
