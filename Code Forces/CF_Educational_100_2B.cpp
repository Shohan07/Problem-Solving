#include<bits/stdc++.h>
using namespace std;

void run_case(){
    int n;
    cin >> n;
    vector<int>A(n);
    array<int64_t, 2> sum = {0, 0};

    for(auto &a : A){
        cin >> a;
    }
    for(int i = 0; i < n; i++){
        sum[i % 2] += A[i];
    }
   // if(sum[0] < sum[1]){
        for(int i = 0; i < n; i += 2){
            A[i] = 1;
        }
    //}
   /* else{
        for(int i = 1; i < n; i += 2)
            A[i] = 1;
    }*/
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t-- > 0){
        run_case();
    }
}
