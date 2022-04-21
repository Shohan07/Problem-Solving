#include<bits/stdc++.h>
using namespace std;
bool use[37];
char s[107];
int r, l;
vector<char>v;
void subset(int pos)
{
    if(v.size() == r){
        for(int j = 0; j < r; j++){
            cout << v[j];
        }
        cout << "\n";
        return;
    }

    for(int i = pos; i < l; i++){
        if(use[i] == 0){
            use[i] = 1;
            v.push_back(s[i]);
            subset(i+1);
            use[i] = 0;
            v.pop_back();
        }

        while(s[i] == s[i+1])i++;
    }
}

int main()
{
    while(cin >> s >> r){
        memset(use, 0, sizeof(use));
        l = strlen(s);
        sort(s, s+l);
        subset(0);
    }
}
