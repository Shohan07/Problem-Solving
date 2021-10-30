#include<bits/stdc++.h>
using namespace std;

int dx[] = {2, -2, 2, -2, 1, -1, 1, -1};
int dy[] = {1, 1, -1, -1, 2, 2, -2, -2}

bool inside(int x, int y)
{
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

int main()
{
    int n, ans;
    char s[3];

    scanf("%d",&n);
    while(n--)
    {
        ans = 0;

        scanf("%s",s);
        int x = s[0] - 'a';
        int y = s[1] - '1';

        for(int j = 0; j < 8; j++){
            ans += inside(x+dx[j] , y+dy[j]);
        }
        printf("%d\n", ans);
    }
    return 0;
}
