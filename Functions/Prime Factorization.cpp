#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
#define ll long long
bool isComp[MAX + 5];
vector<int>prm;
vector<int>pfactor;

void sieve(int n)
{
    for(int i = 2; i * i <= n; i++){
        if(!isComp[i]){
            for(int j = i * i; j <= n; j+=i)
            {
                isComp[j] = true;

            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(!isComp[i]){
             prm.push_back(i);
             //cout<<i<<" ";
        }
    }
}

void primeFactorize(int n)
{
     int sqrtN = int(sqrt(n+1));
     sieve(sqrtN);
     // cout << prm.size() << "\n";
    for(int i = 0; i < prm.size(); i++){
           if(n % prm[i] == 0){
                 while(n % prm[i] == 0){
                   //  cout << n<<" "<<prm[i]<<" ";
                     n /= prm[i];
                     pfactor.push_back(prm[i]);

            }
           }
    }
    if(n > 1){
            pfactor.push_back(n);
            //cout <<n<<" \n";
    }
}
int main()
{
    int n;
    cin >> n;
    primeFactorize(n);
  //  cout << pfactor.size();
    for(int i = 0; prm[i] * prm[i] <= n  && i < pfactor.size(); i++){
        cout << pfactor[i] << " ";
    }
}
