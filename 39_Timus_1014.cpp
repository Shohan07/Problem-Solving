#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int>ans;
    if(n == 1){
        printf("1\n");
    }
    else if(n == 0){
        printf("10\n");
    }
    else{
    for(int i = 9; i > 1; --i){
        while(n % i == 0){
            n = n/i;
            ans.push_back(i);
        }
    }
    if(n == 1){
        for(int i = ans.size() - 1; i >= 0; --i){
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    else{
        printf("-1\n");
    }
    }
    return 0;
}
