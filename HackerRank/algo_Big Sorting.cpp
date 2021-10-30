#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if(a.length() == b.length()){
        return a<b;
    }

        return  a.length() < b.length();

}

int main()
{
    int i, n;
    cin >> n;

    vector <string> v(n);

    for(i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(i = 0; i < n; i++){
        cout << v[i] << endl;
    }
    return 0;
}
