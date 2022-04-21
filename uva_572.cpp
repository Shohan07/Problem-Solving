
#include<bits/stdc++.h>
using namespace std;
int m, n, cnt;
char str[105][105];

void floodFill(int x, int y)
{
    if(x < 0 || y < 0 || x == m || y == n)return;
    if(str[x][y] == '*')return;
    else if(str[x][y] == '@')str[x][y] = '*';

    floodFill(x, y+1);
    floodFill(x, y-1);
    floodFill(x+1, y);
    floodFill(x-1, y);
    floodFill(x+1, y+1);
    floodFill(x+1, y-1);
    floodFill(x-1, y+1);
    floodFill(x-1, y-1);
}

int main()
{
    while(cin >> m >> n){
        if(m == 0)break;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> str[i][j];
            }
        }
        cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(str[i][j] == '@'){
                    floodFill(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }

}
