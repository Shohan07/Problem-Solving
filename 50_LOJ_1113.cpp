
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, pin = 1;
    cin>>T;
    for(int i = 1; i <= T; i++){
        cout << "Case " << i <<":"<<endl;

        stack <string> f;
        stack <string> b;
        string keyword, current = "http://www.lightoj.com/";

        while(cin >> keyword && keyword != "QUIT"){
            pin = 1;

            if(keyword == "VISIT"){
                b.push(current);
                cin >> current;
                f = stack <string> ();
            }
            if(keyword == "FORWARD"){
                if(f.empty()){
                    pin = 0;
                }
                else{
                    b.push(current);
                    current = f.top();
                    f.pop();
                }
            }
            if(keyword == "BACK"){
                if(b.empty()){
                    pin = 0;
                }
                else{
                    f.push(current);
                    current = b.top();
                    b.pop();
                }
            }
            if(pin){
                cout<<current<<endl;
            }
            else{
                cout<<"Ignored"<<endl;
            }
        }
    }
    return 0;
}
