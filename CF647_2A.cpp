#include<bits/stdc++.h>
using namespace std;
int main()

{
    unsigned long long int t, a, b, cnt , ans, i, j;

    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a==b){
            cout << "0" << endl;
        }
        else if(a > b){
            cnt = 0;
           i = 0, j = 0;
            while(a > b){

                if(a%8 == 0){
                    a = a/8;
                    cnt++;
                }
                else if(a%4 == 0){
                    a = a/4;
                    cnt++;
                }
                else if(a%2 == 0){
                    a = a/2;
                    cnt++;
                }
                else{
                    break;
                }
            }
            i = __builtin_popcount(a);
             j = __builtin_popcount(b);
            if((a==b)&&(i==j)){
                cout << cnt << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
        else{
            cnt = 0;

            while(a<b){
                if((a*8) <= b){
                    a = a*8;
                    cnt++;
                }
                else if((a*4) <= b){
                    a = a*4;
                    cnt++;
                }
                else if((a*2) <= b){
                    a = a*2;
                    cnt++;
                }
                else{
                    break;
                }
            }

            if(a==b){
                cout << cnt << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
