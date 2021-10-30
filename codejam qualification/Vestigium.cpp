
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,d=0,trace=0 ;
    cin >> n;
    int arr[n+1][n+1];
    vector<int>v

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
                cin >> arr[i][j];
        }
        trace+=arr[i][d];
        d++;
    }
}
sort(a.begin(), a.end());
auto it = std::unique( a.begin(), a.end() );
bool wasUnique = (it == a.end() );
