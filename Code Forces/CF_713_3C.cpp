#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, l, i, j, k, m , n;
    cin >> t;
    while(t--){
        cin >> a >> b;
        i= j= k= m = n=0;
        string s;
        cin >> s;

       l = a+b;
       j = l-1;
       while(i<j){
        if(s[i]=='0')a--;
        if(s[j]=='0')a--;
         if(s[i]=='1' )b--;
        if(s[j]=='1')b--;
        if(i==j && s[i]=='?'){
             if( a>b ){
                s[i]='0';
                a-=1;
        }
        else {
            s[i]='1';
                a-=1;
        }
        }

        if(s[i]=='0' && s[j]=='?'){s[j]=='0'; a--;}
        else if(s[i]=='?' && s[j]=='0'){s[i]=='0'; a--;}
        else if(s[i]=='1' && s[j]=='?'){s[j]=='1'; b--;}
        else if(s[i]=='?' && s[j]=='1'){s[i]=='1'; b--;}
        else if(s[i]=='?' && s[j]=='?'){
            if((a==b || b>a)&& b>1) {
                s[i]='1', s[j]='1';
                b-=2;
            }
            if(a>b){
                s[i]='0', s[j]='0';
                a-=2;
            }
        }
        i = i+1, j = j-1;
       }

           if(a==0 && b==0){
        cout << s << "\n";
       }
       else cout << -1 << "\n";

       }

       }


