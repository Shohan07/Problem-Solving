#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n, i=0, cnt = 0;
    cin >> n;
    vector<bool>f(n, 0);
    vector<int>v(n);
    for(int p = 0; p < n; p++){

       cin>> v[p];

    }


    priority_queue<int>pq;

    for(int i = n; i > 0; i--){
        f[v[i]] = 1;
        if(!f[i]){
            cnt++;
            pq.push(v[i]);
        }
        if(v[i] > i)cnt--;
        if(f[i] && cnt == 0){
            cout << pq.top();
            pq.pop();
            while(!pq.empty()){
                cout << pq.top();
                pq.pop();
            }
        }
        cout << "\n";
    }
}
