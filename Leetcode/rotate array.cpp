
#include<bits/stdc++.h>
using namespace std;

void rotat(vector<int>& nums, int k) {
        int l = nums.size();
        k %= l;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }

int main()
{

  int sz, k;
  cin >> sz >> k;
  vector<int>v(sz);
  for(int i = 0 ; i < sz; i++){
    cin >> v[i];
  }
  rotat(v, k);
}
