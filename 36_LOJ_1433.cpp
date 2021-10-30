#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, ox, oy, ax, ay, bx, by;
    double r, oa, ab, angle;

    scanf("%d",&t);

    for(i = 1; i <= t; i++){
            scanf("%d %d %d %d %d %d",&ox, &oy, &ax, &ay, &bx, &by);

            oa = sqrt(((ax-ox)*(ax-ox))+((ay-oy)*(ay-oy)));
            r = oa;
            ab = sqrt(((bx-ax)*(bx-ax)) + (by-ay)*(by-ay) );

            angle = acos(((r*r)+(r*r)-(ab*ab)) / (2*r*r));
            printf("Case %d: %lf\n", i, r*angle);
    }
    return 0;
}
