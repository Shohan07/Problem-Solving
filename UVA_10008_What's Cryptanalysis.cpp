#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,  k, l, mx = 0;
    string s;
    int arr[95]= {0};

    cin >> n;
    cin.ignore();
    while(n--){
      //cin.ignore();
      getline(cin, s);
      transform(s.begin(), s.end(), s.begin(), ::toupper);
      l = s.length();
      for(i = 0; i < l; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            arr[s[i]]++;
            if(arr[s[i]] > mx){
                mx = arr[s[i]];
            }
        }
      }
    }
      for(i = mx; i>0 ;i--){
        for(char j = 'A'; j <= 'Z'; j++){
            if(arr[j] == i){
                cout << j << " " << i << endl;
            }
        }
      }
      return 0;
}

