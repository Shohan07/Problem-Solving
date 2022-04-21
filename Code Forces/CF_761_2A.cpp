#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    string s, tt;
    cin >> t;
    while(t--){
    string str, t ;
    cin>> str >> t ;

    int a = 0, b = 0, c = 0 ;
    sort(str.begin(), str.end());
    string ans = "" ;

    for(char &ch: str){
        if(ch == 'a') a++ ;
        else if(ch == 'b') b++ ;
        else if(ch == 'c') c++ ;
        else ans += ch ;
    }

    if(t != "abc" || a ==0 || b == 0 || c == 0){
        cout<< str << "\n" ;
    }
    else{
        string temp = "" ;
        while(a--) temp += 'a' ;
        while(c--) temp += 'c' ;
        while(b--) temp += 'b' ;
        ans = temp + ans ;

        cout<< ans << "\n" ;
    }

   }
}
