

#include<bits/stdc++.h>
using namespace std;

void print(int a, int b, int c)
{
    while(a--) cout << "|" ;

    cout << "+";

    while(b--) cout << "|";

    cout << "=" ;

    while(c--) cout << "|";

    cout << endl;
}
int main()
{
    string s;
    int i, l, a = 0, b = 0, c = 0;

    getline(cin, s);

    l = s.size();
    int t = 0;
    for( i = 0; i < l; i++){
        if(s[i] == '|'){
            if(t == 0) a++;
            if(t == 1) b++;
           if(t == 2) c++;
        }
        else{
            if(s[i] == '+') t = 1;
            if(s[i] == '=') t = 2;
        }
        }
      //  cout << a << " " << b << " " << c  << endl;

        if((abs(a+b-c) != 2) &&  ( (a+b) != c)) cout << "Impossible" << endl;

        else{
            if( (a+b) == c) cout << s << endl;
            else if(a+b<c){
                print(a+1,b,c-1);

            }
            else{
                if(a>b) a--;
                else b--;

                print(a,b,c+1);

            }
        }
        return 0;
    }
