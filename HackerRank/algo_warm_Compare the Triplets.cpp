#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5], b[5], bob = 0, alice = 0;
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for(int i = 0; i < 3; i++){

             if(a[i] == b[i]){
        continue;
    }

        else if(a[i] > b[i]) {
                alice++;

    }
    else if(a[i] < b[i]){
        bob++;
    }

    }

    cout << alice << " " << bob << endl;
    return 0;
}
