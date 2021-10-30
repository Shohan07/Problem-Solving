#include<bits/stdc++.h>
using namespace std;
vector <int > v;
void f(int q)
{
    int j=1;
     for (auto i = v.begin(); i != v.end(); ++i) {
        if (*i == q) {
            v.erase(i);
           v.insert(v.begin(), q);
           cout << j  << "\n";
           break;
        }
        j++;
    }
}
int main()
{
    int n, s,p,m,i;
    v.clear();
    cin >> n >> m;
    for(i=0; i < n; i++){
        cin >> p;
        v.push_back(p);
    }

    for(i = 0; i<m; i++){
        cin >> s;
        f(s);


    }

}
