
#include<bits/stdc++.h>
using namespace std;
 char arr[5][5];
bool check(char ch)
{
    if(arr[0][0] == ch && arr[0][1] == ch &&  arr[0][2] == ch) return false;
    if(arr[1][0] == ch && arr[1][1] == ch &&  arr[1][2] == ch) return false;
    if(arr[2][0] == ch && arr[2][1] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][0] == ch && arr[1][0] == ch &&  arr[2][0] == ch) return false;
    if(arr[0][1] == ch && arr[1][1] == ch &&  arr[2][1] == ch) return false;
    if(arr[0][2] == ch && arr[1][2] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][0] == ch && arr[1][1] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][2] == ch && arr[1][1] == ch &&  arr[2][0] == ch) return false;
    return true;
}

int main()
{
    long long t, cx, co, i, j;

    cin >> t;
    while(t--){
        cx=co=0;
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                cin >> arr[i][j];
                if(arr[i][j] == 'X')cx++;
                else if(arr[i][j] == 'O')co++;
            }
        }

        bool ans;
         if(co == cx)ans = check('X');
        else if(cx == co+1) ans = check('O');
        else ans = false;

        if(ans) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
