#include<bits/stdc++.h>
using namespace std;
const long long max_size = 1000001;
   int n = 1000000000;
void seive(int n)
{

    vector< long long >isprime(max_size, true);
    vector< long long >prime;
    vector< long long >spf(max_size);


    isprime[0] = isprime[1] = false;

    for(long long int i = 2; i < n; i++){
        if(isprime[i]){
            prime.push_back(i);

            spf[i] = i;
        }

        for(long long int j = 0;
             j < (int)prime.size() &&
             i*prime[j] < n && prime[j] <= spf[i];
             j++)
        {
            isprime[i*prime[j]] = false;
            spf[i*prime[j]] = prime[j];
        }
    }

  for (int i=0; i<prime.size() && prime[i] <= n ; i++)
        cout << prime[i] << " ";


}

int main()
{

    seive(n);
    return 0;
}
