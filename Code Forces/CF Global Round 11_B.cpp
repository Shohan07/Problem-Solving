#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s;
    int t, n, k, i, j, cw, cl, sum, canbe,minp1,minp2;
    cin >> t;
    while(t--){
            cw=cl=sum=canbe=minp1=minp2=0;
        cin >> n >> k;
        cin >> s;
        for(i = 0; i < n; i++){
            if(i!=0 ){
                if(s[i]=='W' && s[i-1]=='W') {sum +=2; cw++;}

               else if(k!=0){if(s[i]=='L' && s[i-1]=='W' && s[i+1]=='W'){ s[i]='W', sum+=2; cw++; k--;}}

                else if(s[i]=='L' && (s[i-1]=='W' || s[i+1]=='W')){canbe++; cl++;}
                    else if(s[i]=='W') {cw++; sum +=1;}
                else cl++;
            }
           else if(i==0 && s[i]=='W'){cw++; sum+=1;}
           else if(i==0 && s[i]=='L' && k!=0 && (s[i-1]=='W' || s[i+1]=='W')){canbe++; cl++;}
           else cl++;

        }
        if(k==0){
            cout << sum << endl;
        }
        else{
            if(canbe!=0){

                    minp1 = min(k,canbe);
                    minp2 = min(minp1,cl);
                    k-=minp2;
                    sum+=(minp2*2);
                /*if(k>=canbe && cl>=canbe){sum+=(canbe*2);}
                else if(k>=canbe && cl<canbe){sum+=(cl*2);}*/

            }
            if(k!=0){
                int minp3 = min (cl, k);
                sum+=minp3;
            }
            cout << sum << endl;
        }
    }
    return 0;

}
