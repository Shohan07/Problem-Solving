#include <iostream>
#include <algorithm>
#include <set>

#define ll long long

using namespace std;

int t, n;
int a[500000];
ll ans;

int main(){
    set < int > q;
    cin >> t;
    int k[t];
    for(int i = 1; i <= t; i++){
        cin >> k[i];
        for(int j = 1; j <= k[i]; j++){
            cin >> a[j];
        }
    }
    for(int i = 1; i <= ){
        while(q.size() > 0 && a[q.top()] >= a[i]){
            q.pop();
        }
        if(q.empty())
            L[i] = 1;
        else
            L[i] = q.top() + 1;
        q.push(i);
    }
    q.erase();
    for(int i = n; i >= 1; i--){
        while(q.size() > 0 && a[q.top()] >= a[i]){
            q.pop();
        }
        if(q.empty())
            R[i] =
        else
            R[i] = q.top() - 1;
    }
    for(int i = 1; i <= ; i++){
        ans = max(ans, a[i]*(R[i] - L[i] + 1));
    }
    return 0;
}
