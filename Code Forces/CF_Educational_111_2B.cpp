
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, z, o, n, a, b, on, ze, j;
    vector<int>vz, vo;
    string s;
    cin >> t;
    while(t--){
        vz.clear();
        vo.clear();
        cin >> n >> a >> b;
        cin >> s;


             i = j = on = ze = o = z = 0;
            while(i < n){
                if(s[i] == '1'){
                    o++;
                    j = 0;
                    while(s[i] == '1'){
                            i++;
                            j++;
                            on++;
                    }
                    vo.push_back(j);
                }
                if(s[i] == '0'){
                    z++;
                    j = 0;
                    while(s[i] == '0'){
                            i++;
                            j++;
                            ze++;
                    }
                    vz.push_back(j);
                }
            }
            int ans = 0;
            if(o > z){
                ans = on*a+b;
                for(i = 0; i < vz.size(); i++){
                    ans += (vz[i]*a+b);
                }
            }
            else{
                 ans = ze*a+b;
                for(i = 0; i < vo.size(); i++){
                    ans += (vo[i]*a+b);
                }
            }



          cout <<  max(((b+a)*n),ans) << "\n";

    }
}


