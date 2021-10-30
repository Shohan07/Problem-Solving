#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a[105]={0}, r, t;

    cin >> n;
      t = n;

    while(n--){
        cin >> r;

        while(r--){
            cin >> i;
            a[i]++;
        }
    }
    int f = 0;

    for(i = 1; i < 101; i++){
     //cout  <<"a[i] "<< a[i] << endl;
        if(a[i] == t){
                if(f){
                        cout << " " << i;
                }
                else{
                    cout << i;
                    f = 1;
                }
        }
    }
    cout << endl;

    return 0;
}
