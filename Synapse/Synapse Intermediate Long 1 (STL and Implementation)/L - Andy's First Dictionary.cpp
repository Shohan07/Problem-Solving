#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>st;
    string s, ss;

    while(cin >> s){
         ss="";
        for(int i = 0; i < s.size(); i++){


            if(isupper(s[i])) s[i] = tolower(s[i]);

            if(s[i] >= 97 && s[i] <= 122) ss+=s[i];

            else if (ss != ""){
                st.insert(ss);
                ss = "";
            }
        }
        if(ss != "")st.insert(ss);
    }
    for(auto it : st){
        cout << it << "\n";
    }
}
