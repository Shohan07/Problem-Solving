#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu long long unsigned int
#define pii pair<int, int>
#define PII pair<ll, ll>

const int Max = 1e9+100;
const ll MAX = 1e18+500;
const int sz = 2e5+100;

vector<int> test;
void run_case()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int sum = 0;

    for(auto &a : A){
        cin >> a;
         sum += a;
    }
    for(int cnt = N; cnt > 0; cnt--){
        if(sum%cnt != 0) continue;

        int goal = sum / cnt;
        bool fail = false;

        for(int i = 0, j = 0; i < N; i = j){
            int current = 0;

            while(j < N && current +A[j] <= goal){
                current += A[j];
                j++;
            }
            if(current != goal){
                fail = true;
                break;
            }
        }
        if(!fail){
            cout << N - cnt << '\n' ;
            return;
        }
    }
}

int main()
{
    int  t;
    cin >> t;

    while(t--){
       run_case();
        }
}
