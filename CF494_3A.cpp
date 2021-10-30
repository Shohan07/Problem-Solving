
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ara1[101], ara2[101] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ara1[i];
        ara2[ara1[i]]++;
        //cout << ara2[ara1[i]] << endl;
    }
    int maximum = *max_element(ara2, ara2+101);
    cout << maximum << endl;
    return 0;
}
