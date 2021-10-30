#include<bits/stdc++.h>
using namespace std;

int mn(string s, int sz)
{
    int small = INT_MAX;
    for(int i = 0; i < sz-1; i++){
        small = min(small, abs((int)s[i] - (int)s[i+1]));
    }
    return small;
}

int main()
{
    string s, s2, rs;
    while(getline(cin, s)){
        s2 = s;
        int mxlen = INT_MIN, len;
        int sz = s.size();
        len = mn(s, sz);

        if(len > mxlen){
            mxlen = len;
            rs = s;
        }
        for(int i = 1; i < 11; i++){
            if(prev_permutation(s.begin(), s.end())){
                len = mn(s, sz);
                if(len > mxlen){
                    mxlen = len;
                    rs = s;
                }
                if(len == mxlen){
                    rs = min(s, rs);
                }
            }
        }
        for(int i = 1; i < 11; i++){
            if(next_permutation(s2.begin(), s2.end())){
                len = mn(s2, sz);
            if(len > mxlen){
                mxlen = len;
                rs = s2;
            }
        }
      }

     cout << rs << mxlen << "\n";
    }
}
