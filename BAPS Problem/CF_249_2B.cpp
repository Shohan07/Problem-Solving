
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, b, i, j, l, m, n;
    string s;

    cin >> s >> k;

    l = s.length();
    for(i = 0; i < l && k>0 ; ++i){
            if(s[i]=='9') continue;
        b = i;
        for(j = i+1; j<l && k>0; ++j){
            if((s[j]>s[b])&&(j-i<=k)){
                b=j;
            }
        }
        if(b != i){
            for(m=b; m>i; --m){
                swap(s[m], s[m-1]);
            }
        }
        k = k-(b-i);
    }
    cout << s << endl;

}
