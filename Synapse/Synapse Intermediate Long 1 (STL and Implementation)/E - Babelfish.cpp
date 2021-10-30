#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string>d;
    string s, key, value;

    while(getline(cin, s)){
        if(s== "")break;

        stringstream wrd;

        wrd << s;
        wrd >> value >> key;

        d[key] = value;
    }

    while(cin >> s){
        auto it = d.find(s);

        if(it != d.end())cout << d[s] << endl;

        else cout << "eh\n";
    }
    return 0;
}
