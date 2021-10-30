#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k, i, j,  l, m, n;

    cin >> s;
    cin >> k;
    l = s.length();

    //swap(s[0], s[2]);
    for(i = 0; i < l; i++){
            if(k<=0)break;
     if(s[i] == '9')continue;
     int b = i;
    for(j=i+1; j<l; j++){
        if(s[j]>s[i]) {
            if((j-i)<=k){
                 b = j;
                 k = k - (j-i);
            }
            else{break;}

        }
    }
    /* if(b!=i){
            for(m = b; m>=i; m--){
                swap(s[m-1], s[m]);
            }

        //cout << b;
     }*/
    }
    cout << s << endl;
    return 0;
}
