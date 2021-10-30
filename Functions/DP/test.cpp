#include<bits/stdc++.h>
using namespace std;
int a[100000];

int calc(int n)
{
  if(n == 0 )return 0;
  else if ( n == 1) return 1;
  if(a[n] != -1) return a[n];
  return a[n] = calc(n-1) + calc(n-2);
}

int main()
{
  memset(a, -1, sizeof(a));
  int n;
  cin >> n;
  cout << calc(n);

}