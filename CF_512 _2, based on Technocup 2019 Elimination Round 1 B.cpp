#include<bits/stdc++.h>
using namespace std;

int det(int a, int b, int c, int d, int e, int f)
{
    int determinant = a*(d-f)-b*(c-e)+(c*f - d*e);
    return determinant;
}

int main()
{
    int n, d, m, x, y, i, j, k, l, cnt;

    cin >> n >> d >> m;
    while(m--){
            //bool f = true;
        cin >> x >> y;
        i = det(0,d, n-d,n, x,y);
        if(i > 0){
            cout << "NO" << endl;
            continue;
        }
        //cout << i << endl;
        j = det(n-d,n, n,n-d, x,y);
        if(j > 0){
            cout << "NO" << endl;
            continue;
        }
        //cout << j << endl;
        k = det(n,n-d, d,0, x,y);
        if(k > 0){
            cout << "NO" << endl;
            continue;
        }
        //cout << k << endl;
        l = det(d,0, 0,d, x,y);
        if(l > 0){
            cout << "NO" << endl;
            continue;
        }
        //cout << l << endl << endl;
        cout << "YES" << endl;
    }
    return 0;
}
