
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ara[100], odd=0, even=0, i, o, e;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> ara[i];
        if(ara[i] % 2 == 0 ){
            even++;
            e = i;
        }
        else{
            odd++;
            o = i;
        }
    }
    if(even < odd){
        cout<<e<<endl;
    }
    else{
        cout << o << endl;
    }
    return 0;
}
