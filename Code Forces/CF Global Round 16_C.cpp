#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, c = 0;
    cin >> n;
    string s1, s2;
    int arr[2][n];
    cin >> s1 >> s2;
    for(int i = 0; i < n; i++){
        char ch1 = s1[i];
        char ch2 = s2[i];
        arr[0][i] = ch1 - '0';
        arr[1][i] = ch2 - '0';
    }
    for(int i = 0; i < n; i++){
        if((arr[0][i] == 0 and arr[1][i] == 1) || (arr[0][i] == 1 and arr[1][i] == 0))c += 2;
        if(arr[0][i] == 0 and arr[1][i] == 0){
            if(i+1 == n){
                c += 1;
                continue;
            }
            if(arr[0][i+1] == 1 and arr[1][i+1] == 1){
                i++;
                c += 2;
            }
            else c += 1;
        }
        else if(arr[0][i] == 1 and arr[1][i] == 1){
            if(i+1 == n){
                continue;
            }
            if(arr[0][i+1] == 0 and arr[1][i+1] == 0){
                i++;
                c += 2;
            }
        }
    }
    cout << c << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
