#include<bits/stdc++.h>
using namespace std;
int f[10000];

int fib(int n)
{
  f[0] = 0,f[1] = 1;
  
  for(int i = 2; i <= n; i++)
  {
    f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}

int main()
{
  int n;
  cin >> n;
  memset(f, -1, sizeof(f));
  cout << fib(n) << "\n";
}