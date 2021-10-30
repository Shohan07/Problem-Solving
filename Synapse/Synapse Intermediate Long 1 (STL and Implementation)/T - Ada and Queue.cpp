#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, cnt=0, n;
    string s;
    deque <int>q;
    cin >> t;
    while(t--){
       cin >> s;
       if(s[0] == 'b'){
        if(q.empty())cout << "No job for Ada?\n";

        else{
        if(cnt&1){
            cout << q.front() << "\n";
            q.pop_front();
        }
        else{
            cout << q.back() << "\n";
            q.pop_back();
        }
       }
       }

       else if(s[0]== 'f'){
        if(q.empty())cout << "No job for Ada?\n";

        else{
        if(cnt&1){
            cout << q.back() << "\n";
            q.pop_back();
        }
        else{

            cout << q.front() << "\n";
            q.pop_front();
        }
       }
       }
       else if(s[0]=='r')cnt++;
       else if(s[0]=='p'){
        cin >> n;
        if(cnt&1)q.push_front(n);
        else q.push_back(n);
       }
       else if(s[0]=='t'){
        cin >> n;
        if(cnt&1)q.push_back(n);
        else q.push_front(n);
       }
    }
    return 0;
}
