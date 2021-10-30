

#include<bits/stdc++.h>
using namespace std;

 long long int n, i , j, a, root1, root2, ara[4];
bool  product(long long int n)
 {
     root1 = sqrt(n);

     for(i = 2; i <= root1; i++){
            a = 0;
        if(n % i == 0){
            a = n/i;
            root2 = 0;
            root2 = sqrt(a);
            for(j = 3; j <= root2; j++){
                if(a % j == 0){
                    ara[0] = i; ara[1] = j; ara[2] = a/j;
                    if(ara[0] == ara[1] || ara[0] == ara[2] || ara[1] == ara[2]){
                        continue;
                    }
                    else{
                        return 1;
                    break;
                    }

                }
            }
        }
     }
     return 0;
 }
int main()
{
    int t;
    cin >> t;
    while(t--){
        //int flag = 0;
        cin >> n;
        if(product(n)){
            cout << "YES" << endl;
            cout << ara[0] << " " << ara[1] << " " << ara[2] << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
