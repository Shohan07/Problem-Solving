#include<bits/stdc++.h>
using namespace std;

vector<int>v[10000];

void find_divisor(int n)
{
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j += i){
            v[j].push_back(i);
        }
    }
    for(i = 0; i < v[n].size(); i++)
    {
        cout << v[j][i] << " ";
    }
}
int main()
{

    int n;
    cin >> n;
    find_divisor(n);
}
