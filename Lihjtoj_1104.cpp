#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j;
    cin >> t;
    for(int i = 1; i<=t; i++){
        cin >> n;
        double probability = 1.0;
        for(j = 1; probability > 0.5; j++){
            probability *= (double)(n-j)/ n;
        }
        cout << "Case " << i << ": " << j-1 << endl;
    }
    return 0;
}
