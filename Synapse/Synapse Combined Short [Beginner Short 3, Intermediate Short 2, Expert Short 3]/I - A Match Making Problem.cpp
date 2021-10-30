
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[10007], s[10007];
    int bz, sz, t=0;
    while(1){
        cin >> bz >>sz;
        if(bz==0&&sz==0) break;

        for(int i = 0; i < bz; i++){
            cin >> b[i];

        }
        for(int i = 0; i < sz; i++){
            cin >> s[i];
        }
        cout << "Case " << ++t <<": ";
        if(bz <= sz) cout << 0 << "\n";
        else {
                sort(b, b+bz);
            cout << bz-sz << " " << b[0] << "\n";
        }

    }
    return 0;
}
