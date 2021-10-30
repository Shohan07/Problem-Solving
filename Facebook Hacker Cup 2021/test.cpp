#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int arr[27];

    while(cin >> s){
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < s.length(); i++){
            arr[s[i] - 'A']++;
        }
        for(int i = 0; i < 26; i++){
           cout << arr[i] << " ";
        }cout << "\n";
        cout << char(2+ 'A');
    }
}
