
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, k, i;
    cin >> n >> p >> k;

    int s = p-k, e = p+k;
    if(s<1) s=1;



    if(s != 1){
         cout << "<< ";
    }

for( i = s; i < e && i < n; i++){
        if(i == p){
            cout << "(" << i << ") ";
        }
        else {
            cout << i << " ";
        }
    }
     if(i == p){
            cout << "(" << i << ")";
        }
        else {
            cout << i;
        }
    if(i != n) {
        cout << " >>";
    }
    cout << endl;
    return 0;
}
