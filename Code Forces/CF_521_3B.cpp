
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[105], i, k = 0;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = 1; i < n; i++){
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1){
            a[i+1] = 0;
            i++;
            k++;
        }
    }
    cout << k << endl;
    return 0;
}
