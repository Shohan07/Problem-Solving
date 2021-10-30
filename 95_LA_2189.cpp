#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    unsigned long long n, arr[100005], i, j, st, ed, cs = 0, mod;
     while(cin >> n && n){

        for(i = 0;  i < n; i++){
            cin >> arr[i];
        }
        arr[n] = 0;
        cout << "Case " << ++cs << ":\n";
        for(i = 0; i < n; i++){
            if(arr[i] + 1 != arr[i + 1]){
                cout << 0 << arr[i] << "\n";
            }
            else{
                    cout << 0 << arr[i] << "-";
                    long long pos = i+1;

                    while(arr[pos]+1 == arr[pos+1]){
                        pos++;
                    }
                    st = arr[i];
                    ed = arr[pos];
                   // cout <<arr[pos]+1 << " "<< arr[pos+1]<<" "<< ed << "\n";
                    mod = 10;
                    while(st - (st % mod) != ed - (ed % mod)){
                        mod *= 10;
                    }
                    cout << ed % mod << "\n";
                    i = pos;
            }
        }
        cout << "\n";
     }
 }
