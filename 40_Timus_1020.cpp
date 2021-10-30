#include<bits/stdc++.h>
using namespace std;

float distance(float x1, float y1, float x2, float y2)
{
    float dx = x2-x1;
    float dy = y2-y1;

    return sqrt((dx*dx) + (dy*dy));
}

int main()
{
    int n,i;
    float r;

    cin>>n>>r;
    float length = 0, position[n][2];

    for(i = 0; i < n; i++){
        cin>>position[i][0]>>position[i][1];
        if(i>0)
            length += distance(position[i][0], position[i][1], position[i-1][0], position[i-1][1]);
    }
    length += distance(position[n-1][0], position[n-1][1], position[0][0], position[0][1]);
    length += 2 * 3.1415926 * r;
    cout << fixed << setprecision(2) << length <<'\n';
    return 0;
}
