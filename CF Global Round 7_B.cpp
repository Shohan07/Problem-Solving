

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector <long long int > vb;
     //vector <long long int > va;
     long long int n, b, i, mx = 0;

     cin >> n;

     for(i = 0; i < n; i++){
        cin >>b;
        if(i)cout << " ";
        cout << b+mx;
        mx = max(b+mx, mx);


       }
       cout << endl;
 return 0;
}
