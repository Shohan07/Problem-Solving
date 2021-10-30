#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
  string s,a,b;

    cin >> t;
    while(t-- > 0){
        cin >> n;
        cin >> a;

        b += "1";
        if(a[0] == "1") s+="2";
        else s+= "1";
        //cout <<b[0];
       for(int i = 1; i < n; i++){
            if(s[i-1] == "2"  && a[i] == "1"){b += "0" ;  s += "1";}
            else if(s[i-1] == "2"  && a[i] == "0"){b += "1" ;  s += "1";}
            else if(s[i-1] == "1"  && a[i] == "1"){b += "1" ;  s += "2" ;}
            else if(s[i-1] == "1"  && a[i] == "0"){b += "0" ;  s += "0";}
            //cout << b[i] << " "<< i<< "   " ;

        }
      cout  << b << "\n" ;
      s.clear();
      a.clear();
      b.clear();
    }
}
