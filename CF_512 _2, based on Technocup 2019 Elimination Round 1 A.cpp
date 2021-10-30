#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n, p;
     bool i = true;
     cin >> n;
     while(n--){
        cin >> p;

        if(p == 1)
            i = false;
     }
     if(i== true)
        cout << "EASY" << endl;
     else
        cout << "HARD" << endl;

     return 0;
 }
