#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, j,f, l;
    while(getline(cin, s)){
        f = 0;
        l = s.length();
        for(i=0; i < l; i++){

            if(s[i] == ' ') {

         for(j = i-1; j >= f; j--){
            cout << s[j];
         }
         cout << " ";
         f = i+1;
            }
        }
        for(i = l-1; i >= f; i--){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
