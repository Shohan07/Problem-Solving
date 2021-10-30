#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int size;
    int a;
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++)
  {
      cin>>arr[i];
  }
//int arr[]={5,10,15,20,25,6,8};
     cout<<__gcd(arr[0],arr[a])<<endl;
    //cout<<std::lcm(10,20)<<endl;

   cout<< sizeof(arr)/sizeof(arr[0])<<endl;



}

