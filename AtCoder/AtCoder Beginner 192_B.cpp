

#include<bits/stdc++.h>
using namespace std;
int main()
{

string s;
getline(cin, s);

bool  b=0;
int i, j, l = s.length();
for(i = 0, j=1; i < l; i+=2, j+=2){
    if(s[i] >= 'A'   && s[i] <= 'Z') b=1;

    if(j>=l)continue;

    else if (s[j] >= 'a'   && s[j] <= 'z')b=1;
}
if(b) cout << "No\n";
else cout << "Yes\n";
    return 0;
}
