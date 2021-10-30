
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, arr[105]={0}, v;

    cin >> n;

    while(n--){
        cin >> i;
        arr[i]++;
    }
    for(i = 0; i < 100; i++){

            if(arr[i]>0){
                while(arr[i]--){
                    cout << i << " ";
                }
            }

    }
    cout << endl;

    return 0;
}
