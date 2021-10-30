#include <bits/stdc++.h>
using namespace std;

vector<int>v;
void find_divisor(int n)
{
    v.push_back(1);
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(i == n/i)continue;
            v.push_back(n/i);
        }
    }
    v.push_back(n);
    for(auto i : v){
        cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    find_divisor(n);
}
