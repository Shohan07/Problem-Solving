#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, s, c, re;
    double cn = 1e7/(24*60*60*100);
    while(scanf("%2d %2d %2d %2d",&h, &m, &s, &c) != EOF){
        re = (h*60*60*100) + (m*60*100) + (s*100) + c;
        printf("%07d\n", (int)(re*cn));
    }

}
