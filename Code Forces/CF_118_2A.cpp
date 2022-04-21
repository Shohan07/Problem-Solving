
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, p1, p2;
    string x1, x2;
    cin >> t;

    while(t--){
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        int l1 = x1.length();
        int l2 = x2.length();
        if(l1 + p1 > l2 + p2){
           cout << ">\n";
           continue;
        }
        else if(l1 + p1 < l2 + p2){
            cout << "<\n";
            continue;
        }
        int f = 0;
        for(int i = 0; i < min(l1, l2); i++){
                    if(x1[i] < x2[i]){
                        f = 1;
                        cout << "<\n";
                        break;
                    }
                    else if( x1[i] > x2[i]){
                        f = 2;
                        cout << ">\n";
                        break;
                    }
                }

                if(f == 0)
                {


                    if(l1 > l2){
                          for(int i = l2; i < l1; i++){
                            if(x1[i] != '0'){
                                f = 1;
                                break;
                            }
                          }
                         if(f)cout << ">\n";
                    }
                    else if(l1 < l2){
                        for(int i = l1; i < l2; i++){
                            if(x2[i] != '0'){
                                f = 1;
                                //cout << "FFaff";
                                break;
                            }
                          }
                          if(f)cout << "<\n";
                    }

                    if(f==0)cout << "=\n";
                }


    }
}
