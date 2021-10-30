
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;

    cin >>str;
    int t = 0;
    int i, j , k;
    i =  str[0]-'0';   str += '5'
    j = str[1]-'0';
    k = str[2]-'0';
    if(i==j) t++;
    if(j==k) t++;
    if(t == 2) cout << "Won\n";
    else cout << "Lost\n";
    return 0;
}
