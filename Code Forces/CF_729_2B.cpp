#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, a, b, p, s, f, i ;
    vector <long long> v;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
       v.clear();
        f = p = s = 0;
        if(a>b)swap(a,b);
        if(a == 1){
            v.push_back(b);

        }
        else{
            v.push_back(a);
            v.push_back(b);
        }


         i = 0;
        while(p < n  || s < n){

                p = v[i] * a;
                s = v[i] + b;
                cout << p << " " << s << "\n";
                if(p == n || s == n){
                    cout << "Yes\n";
                    f = 1;
                    break;
                }
                else {
                        if(p>s)swap(p,s);
                    if(p <n && s < n){

                   v.push_back(p);
                   v.push_back(s);
                    }
                    else if(p<n)v.push_back(p);

                }
            i++;
        }
        if(f==0) cout << "No\n";
    }
}
