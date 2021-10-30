

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7][7];
    memset(arr, -1, sizeof(arr));
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            cout << arr[i][j] << " " ;
        }
        cout << "\n";
    }
}
