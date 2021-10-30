#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , i, j;
    cin >> n;
    while(n--){
        string s;

        cin >> s;

        int l = s.length();
      //  cout << l << endl;
        int f = 0, g = 0, cnt = 0;
        for(i = 0; i < l; i++){
            if((s[i] == '(') ) f++;
            else if((s[i] == ')') && f) cnt++, f--;
            else if((s[i] == '[')  ) g++;
            else if((s[i] == ']') && g) cnt++, g--;
        }
        cout << cnt << endl;
    }
    return 0;
}
