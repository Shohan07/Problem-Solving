#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[307], n, b, i, j;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        for(i=0,j=n-1; i<=j; i++,j--){
            if(i==j && n>1)cout <<  " " << a[i] ;
            else if(n==1 && i==j)cout  << a[i] ;
            else{
                if(i==0)cout << a[i] << " " << a[j];
                else cout << " " << a[i] << " " << a[j];
            }
        }cout << "\n";
    }
}
