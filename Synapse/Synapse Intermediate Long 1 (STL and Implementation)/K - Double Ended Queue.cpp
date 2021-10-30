#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, inp, j, k;
    string s;

    cin >> t;
   for(j=1; j<=t; j++){
        cout << "Case " << j << ":\n";
        cin >> n >> m;
        deque<int>q;

        for(k=0; k<m; k++){
            cin >> s;
            if(s == "pushLeft"  || s == "pushRight"){
                cin >> inp;
                if(q.size() == n) cout << "The queue is full\n";
                else if(s == "pushLeft"){
                    q.push_front(inp);
                    cout << "Pushed in left: " << inp << "\n";
                }
                else if(s == "pushRight"){
                    q.push_back(inp);
                    cout << "Pushed in right: " << inp << "\n";
                }
            }
            else{
                if(q.size() == 0)cout << "The queue is empty\n";

                else if(s == "popLeft"){
                    cout << "Popped from left: " << q.front() << "\n";
                    q.pop_front();
                }
                else if(s == "popRight"){
                    cout << "Popped from right: " << q.back() << "\n";
                    q.pop_back();
                }
            }
        }
    }
}
