
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s, letterscode = "01230120022455012623010202";
    cout << "         NAME                     SOUNDEX CODE" << endl;

    while(cin >> s){
        cout << "         " << s;

    long long int i,j,l,cnt,value,last;

    l = s.length();
    for(i=0; i<25-l; i++){
         cout << " ";
    }
    cout << s[0];

    last = letterscode[s[0] - 'A'];
    cnt=0;
    for(i=1;cnt<3 && i<l; i++){
            j=s[i]-'A';
        value = letterscode[j];
        //cout << value << " "<<letterscode[j] << " " << j<< "    ";
     //   cout << value << " " << i << " " << cnt<< "   ";
        if(last != value && value != '0'){
            cout << letterscode[j];
             cnt++;
        }
       last = value;
    }

    while(cnt<3){
        cout << "0";
        cnt++;
    }
    cout << endl;
    }
    cout << "                   END OF OUTPUT" << endl;
    return 0;
}

