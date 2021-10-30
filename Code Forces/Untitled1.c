#include<bit/stdc++.h>
using namespace std;

const int INF = int(1e9) + 5;

void run_case()
{
    int N, M;
    cin >> N, M;
    vector <int> memory[3];
    vector <int> A(N), B(N);

    for (auto &a : A)
        cin >> a;

    for (auto &b : B)
        cin >> b;

    for (int i = 0; i < N; i++)
        memory[B[i]].push_back(A[i]);

    sort(memory[1].rbegin(), memory[1].rend());
    sort(memory[2].rbegin(), memory[2].rend());

    int N1 = int(memory[1].size());
    int N2 = int(memory[2].size());
    int 64_t help = 0;
    int cost = 0;
    int best = INF;

    for (int x : memory[2]){
        help += x;
        cost += 2;
    }

    for (int i = 0; j = N2; i <= N1; i++){
        while(j > 0 && help - memory[2][j-1] >= M)
    }
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0){
        run_case();
    }
}
