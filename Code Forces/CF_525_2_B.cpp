#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, k, i, j;

    cin >> n >> k;

    long long int arra[n+5];
    for(i = 0; i < n; i++){
        cin >> arra[i];
    }
    sort(arra, arra+n);

    cout << arra[0] << endl;
    k--;
    j = 1;
    while(k--){
       if(j == n || j > n){
        cout << "0" << endl;
        j++;
        continue;
       }


       while(1){
        int sub = arra[j] - arra[j-1];
        if(sub < 1) {
        j++;
        if(j > n){
        cout << "0" << endl;
        j++;
       break;
       }
        continue;
       }
       else{
         cout << sub << endl;
         j++;
         break;
       }
       }



    }
    return 0;
}
