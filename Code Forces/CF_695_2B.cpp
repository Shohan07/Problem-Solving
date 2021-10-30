#include<bits/stdc++.h>
using namespace std;

void run_case()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for(auto &a : A)
        cin >> a;

   auto score  = [&](int index)
    {
        if(index <= 0 || index >= N-1)
            return 0;

        if(A[index] < A[index-1] && A[index] < A[index+1])
            return 1;

        if(A[index] > A[index-1] && A[index] > A[index+1])
            return 1;

        return 0;
    };
    int base = 0;

    for(int i = 0; i < N; i++)
        base += score(i);

    int best = base;

    for(int i = 0; i < N; i++){
        int original = A[i];
        set <int> candidates;

        if(i > 0){
           // candidates.insert(A[i-1]-1);
            candidates.insert(A[i-1]);
            //candidates.insert(A[i-1]+1);
        }
        if(i < N-1){
           // candidates.insert(A[i+1] -1);
            candidates.insert(A[i+1]);
           // candidates.insert(A[i+1] + 1);
        }
        int without = base - score(i-1) - score(i) - score(i+1);

        for(int x : candidates){
            A[i] = x;
            best = min(best, without + score(i-1) + score(i) + score(i+1));
        }

        A[i] = original;

    }
    cout << best << '\n';
}

int main()
{
    int tests;
    cin >> tests;
    while(tests-- > 0){
        run_case();
    }
}
