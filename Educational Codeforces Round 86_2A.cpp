#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, x, y, a, b, c, d, e, result;

    cin >> t;

    while(t--){
        cin >> x >> y;
        cin >> a >> b;
        if(b > a){
            if(x>y){
                c = (x-y)*a;
                d = (y*b);
                e = (y* (2*a));
                result = min(d,e) + c;
               cout << result << endl;
            }
            else if(y>x){
                c = (y-x)*a;
                d = (x*b);
                e = (x* (2*a));
                result = min(d,e) + c;
                cout << result << endl;
            }
            else{

                d = (x*b);
                e = (x* (2*a));
                result = min(d,e);
            cout << result << endl;
            }
        }
        else{
            if(x>y){
                c = (x-y)*a;
                d = (y*b);

                result = d + c;
               cout << result << endl;
            }
            else if(y>x){
                c = (y-x)*a;
                d = (x*b);

                result = d + c;
                cout << result << endl;
            }
            else{

                d = (x*b);

                result = d;
            cout << result << endl;
            }
        }
    }
    return 0;
}
