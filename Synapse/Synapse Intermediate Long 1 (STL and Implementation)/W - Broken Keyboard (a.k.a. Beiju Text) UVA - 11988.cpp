
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, sf, sl;
    deque<char>dq;
    int i, j, k, l;

    while(getline(cin, s)){
            l = s.length();
            j=k=0;
        for(i = 0; i < l; i++){
            if(s[i] == '['){
                    j++;
                    s[i]='0';
                    while(j>0){
                        i++;
                        if(s[i]=='['){j++;}
                        else if(s[i]==']'){j--;}
                        else {sf+=s[i];}
                    }
                }
           else sl+=s[i];
            }

        cout << sf << sl << "\n";
        sf.erase();
        sl.erase();
    }
    return 0;
}
