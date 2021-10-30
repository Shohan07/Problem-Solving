#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j, f=0, v, n, arr[107], p ;

    cin >> n;

    for(j=0; j < n; j++){
        cin >>arr[j];

        if(j>0 && !f){
           if(v != arr[j])f=1;
        }
        else v = arr[j];
    }

    if(f){
         sort(arr, arr+n);
       int i=1;
       p = arr[0];
       while(i<n){
        if(arr[i] > p){
            p = arr[i];
            break;
        }
        i++;
       }
            cout << p << "\n";
    }
    else cout << "NO\n";

    return 0;
}
