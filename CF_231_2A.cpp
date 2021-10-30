

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, l, cntl = 0, cntr = 0;

    getline(cin, s);

    l = s.size();
    bool f = false;
    for( i = 0; i < l; i++){
        if(s[i] == '=') f = true;
        if(!f) {
            if(s[i] == '|') cntl++;
        }
        else{
            if(s[i] == '|') cntr++;
        }
    }
    int dif = abs(cntl-cntr);
    if(dif == 0) cout << s << endl;
   else if(dif != 2) cout << "Impossible" << endl;

   else{
    cout << "|";
    for(i = 0; i < l-1; i++){
        cout << s[i];
    }
    cout << endl;
   }
   return 0;
}
