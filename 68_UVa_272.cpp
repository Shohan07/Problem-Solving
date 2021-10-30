#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, quot = 0;

    while( getline(cin,s)){

        int sz = s.length();
    for(int i = 0; i < sz; i++){
        if(s[i] == '\"'){
            quot++;
            if(quot % 2 == 0){
                    cout << "\'" << "\'";
            }
            else{
                cout << "`" << "`";
            }
        }

     else{

        cout << s[i];

     }
    }
    cout << endl;
    }
    return 0;
}
