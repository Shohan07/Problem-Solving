#include<bits/stdc++.h>
using namespace std;
#define mx 100000

void LIS_with_multiset()
{
    int n, a[mx + 5];
    multiset < int > lis;
    multiset < int > :: iterator it;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        lis.insert( a[i]);
        it = lis.upper_bound( a[i]);
        if(it != lis.end()) lis.erase(it);
    }
    cout << lis.size() << "\n";
}
int main()
{
    LIS_with_multiset();
}
