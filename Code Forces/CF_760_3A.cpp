#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a1, a2, a3, p, r, s;
    vector<long long>b(7);

    cin >> t;
    while(t--){
        b.clear();
        for(int i = 0; i < 7; i++){
            cin >> b[i];
        }
        a1 = b[6] - b[5];
        bool f = 0;
        if(((b[6]-b[4]) + (b[6] - b[3]) + a1) == b[6]){
            a2 = b[6] - b[4];
            a3 = b[6] - b[3];
        }
        else if(((b[6]-b[4]) + (b[6] - b[2]) + a1) == b[6]){
            a2 = b[6] - b[4];
            a3 = b[6] - b[2];
        }
        else if(((b[6]-b[4]) + (b[6] - b[1]) + a1) == b[6]){
            a2 = b[6] - b[4];
            a3 = b[6] - b[1];
        }
        else if(((b[6]-b[2]) + (b[6] - b[3]) + a1) == b[6]){
             a2 = b[6] - b[2];
             a3 = b[6] - b[3];
        }
        else if(((b[6]-b[1]) + (b[6] - b[3]) + a1) == b[6]){
             a2 = b[6] - b[3];
            a3 = b[6] - b[1];
        }
       cout << a1 << " " << a2 << " " << a3 << "\n";
    }

}
