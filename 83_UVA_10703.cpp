#include<bits/stdc++.h>
using namespace std;

bool board[507][507];

int main()
{
    int w, h, n, cnt;

    while(cin >> w >> h >> n , w){
       memset(board, false, sizeof(board));
        while(n--){
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            if(x1 > x2) swap(x1, x2);
            if(y1 > y2) swap(y1, y2);



            for(int y = y1-1; y < y2; ++y){
                for(int x = x1-1; x < x2; ++x){
                    board[y][x] = true;
                }
            }
        }
        cnt = 0;
        for(int y = 0; y < h; ++y){
            for(int x = 0; x < w; ++x){
                if(!board[y][x]){
                    ++cnt;
                   // cout << cnt << "\n";
                }
                else
                    board[y][x] = false;

            }
        }
        if(cnt == 0) cout << "There is no empty spots.\n";
        else if(cnt == 1) cout << "There is one empty spot.\n";
        else cout << "There are " << cnt << " empty spots.\n";
    }
}
