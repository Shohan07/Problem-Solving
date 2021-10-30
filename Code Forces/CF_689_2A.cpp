#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    string s = "abc";
    cin >> t;
    while(t--){
        cin >> n >> k;
        while(k>0){
            cout << "a";
            k--;
            n--;
        }

       int j = 1;
       while(n>0){
        if(j > 2) j = 0;
        cout << s[j];
        j++;
        n--;
       }
       cout << endl;
    }
    return 0;
}
