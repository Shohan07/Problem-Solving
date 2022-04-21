#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l, r, c;
        cin >> l >> r >> c;
        cout << c << "\n";
        priority_queue<int>mn, mx, eq;
        int mnv = l, mxv = r;
        eq.push(-c);
        n--;
        mn.push(-c);
        mx.push(-c);
        while(n--){
            cin >> l >> r >> c;
            if(l == mnv && r == mxv){
                eq.push(-c);
                mn.push(-c);
                mx.push(-c);
            }
            if(l < mnv){
                mnv = l;
                while(!eq.empty()){
                    eq.pop();
                }
                while(!mn.empty()){
                    mn.pop();
                }
                mn.push(-c);
            }
            if(l == mnv){
                mn.push(-c);
            }
            if(r > mxv){
                mxv = r;
                while(!eq.empty()){
                    eq.pop();
                }
                while(!mx.empty()){
                    mx.pop();
                }
                mx.push(-c);
            }
            if(r == mxv){
                mx.push(-c);
            }
            if(mxv == r && mnv == l){
                eq.push(-c);
            }
            if(!eq.empty()){
                int x = -eq.top();
                int y = -mn.top();
                int z = -mx.top();
                cout << min(x, y+z) << "\n";
            }
            else{
                int y= -mn.top();
                int z = -mx.top();
                cout << y + z << "\n";
            }
        }

    }
}
