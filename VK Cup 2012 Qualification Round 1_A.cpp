#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, num, cnt = 0, i;
    cin >> n >> k;
    //vector<int> v;
    for(i=0; i < n; i++){
            cin >> num;
    if (num >= k)
        cnt++;
        //v.push_back(num)
    }
    cout << cnt << endl;
    return 0;
}
