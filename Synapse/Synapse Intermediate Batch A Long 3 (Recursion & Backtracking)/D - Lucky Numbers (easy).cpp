#include<bits/stdc++.h>
using namespace std;
typedef long long int64;
int64 mx = 1e10;
vector<int64>v;
bool tst(int64 n)
{
    int c4 =0, c7= 0;
    while(n){
        if(n%10 != 4 && n % 10 != 7)return false;
        else if(n %10 ==4)c4++, n/=10;
        else c7++, n/=10;
    }
    return c4 == c7;
}
void f(int64 n){
    if(n >= mx)return;
    if(tst(n))v.push_back(n);
    f(n*10+4);
    f(n*10+7);
}
int main()
{
    f(0);
    sort(v.begin(), v.end());

    int64 p;
    cin >> p;
      vector<int64>::iterator k;
         k = (lower_bound(v.begin(), v.end(), p)) ;

        cout << *k << "\n";
}
