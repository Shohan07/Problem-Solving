#include<bits/stdc++.h>
using namespace std;
 int cnt = 0, cnt2 = 0;
  string s1, s2;
    string a[3][3];
     int b[3][3]={0};
     bool check(int i, int j)
     {
         if(i > 1 || j > 1) return 0;
         if(a[i][j] != "#")return 0;
         if(a[i][j] == "#"){
            b[i][j] = 1;
            check(i, j-1);
            check(i,j+1);
            check(i-1,j-1);
            check(i-1,j+1);
         }
     }

int main()
{
    cin >> s1 >> s2;
;    a[0]0] = s1[0]; a[0][1] = s1[1];
    a[1][0] = s2[0]; a[1][1] = s2[1];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(a[i][j] == "#"){
                check(i, j);
                break;
            }
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(a[i][j] == "#" && b[i][j] != 1){
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
}
