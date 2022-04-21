
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int n){
    int sz = n;

    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        pq.push(arr[i]);
        cout << pq.top() << " " << sz << "\n";
        while(pq.top() == sz){
            cout << pq.top() << " ";
            pq.pop();
            sz--;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    solve(arr, n);
}
