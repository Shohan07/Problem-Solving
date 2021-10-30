#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,c;
    cin>>T;
    double x;

    while(T--){
        cin>>x;
        c = 0;
        while(x > 1.00){
            c++;
            x /= 2;
        }
        cout<<c<< " days"<<endl;
    }
    return 0;
}
