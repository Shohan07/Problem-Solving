#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<int>ans(n+1, 0);

        for(int i = n; i >= 1; i--){
            if(a[i] == i)continue;

            int dist = 0, indx;
            for(int j = 1; j <= i-1; j++){
                if(a[j] == i){
                    dist = j;
                    indx = j;
                    break;
                }
            }
            ans[i] = dist;
            vector<int> temp;

            for(int j = indx + 1; j <= i; j++){
                temp.push_back(a[j]);
            }
            for(int j = 1; j <= indx; i++){
                temp.push_back(a[j]);
            }
            for(int j = i+1; j <= n; j++){
                temp.push_back(a[j]);
            }
            for(int j = i+1; j <= n; j++){
                a[j] = temp[j-1];
            }
            for(int k = 1; k <= n; k++) cout << a[k] << " ";

            cout << "\n";
        }
    }
}
