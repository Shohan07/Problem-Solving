#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       deque <int> dq;

       int n, p;

       cin >> n;
       cin >> p;
       dq.push_back(p);
       for(int i = 1; i < n; i++){
            cin >> p;
            if(p < dq.front())dq.push_front(p);
            else dq.push_back(p);
       }
       for(auto it = dq.begin(); it != dq.end(); it++){
        if(it == dq.begin())cout << *it;
        else cout << " " << *it;
       }cout << "\n";
       dq.clear();
    }
}
