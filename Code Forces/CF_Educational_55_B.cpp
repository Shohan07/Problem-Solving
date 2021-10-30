
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector < int > v;
    int n, i, k = 0, gcnt = 0, mx;
    string s;
    cin >> n;
    cin >> s;
    for(i = 0; i < n; i++){
        if(s[i] == 'G'){
            k++;
            gcnt++;
        }
        else{
            v.push_back(k);
            k = 0;
        }
    }
    v.push_back(k);
    v.push_back(0);
    mx = 0;

    for(i = 1; i < v.size(); i++){
        k = v[i-1] + v[i];
        if(k > mx){
            mx = k;
        }
    }
    if(gcnt > mx){
        mx++;
    }
    cout << mx << endl;
    return 0;
}
