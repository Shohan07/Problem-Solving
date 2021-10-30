#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    string s;
    cin >> n >> s;
    char c = s[0];
    p = 0;
    for(int i = 0; i < n; i++){
        if(s[i] >= c){
            c = s[i];
            p = i;
        }
        else{
                p;
            break;
        }
    }


    s.erase(s.begin() + p);
    cout << s << endl;
    return 0;

}
