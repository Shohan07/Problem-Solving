
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, i, p;
    cin >> t;

    while(t--){
        cin >> n >> k;
        vector<int> v, ans;
        deque<int>q;
        for(i = 0; i < n; i++){
            cin >> p;
            v.push_back(p);
        }
        for(i = 0; i < v.size(); i++){
            while(!q.empty() && i-q.front()>=k)
                q.pop_front();

            while(!q.empty() && v[q.back()]<v[i])
                q.pop_back();

            q.push_back(i);
            if(i>=k-1)ans.push_back(v[q.front()]);
        }
        for(i = 0 ; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        v.clear();
        ans.clear();
        q.clear();
    }
    return 0;
}
