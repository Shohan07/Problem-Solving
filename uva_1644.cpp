 #include<bits/stdc++.h>
using namespace std;
#define mx 9000000
bool arr[mx];
int main()
{

    arr[1] = 1;
    int i, j;

    for(i=4; i<mx; i+=2) arr[i] = 1;

    for(i=3; i<mx; i+=2){
        if(arr[i] == 0){
            for(j =i*2; j<mx; j+=i){
                arr[j]=1;
            }
        }
    }

    int n,c;
    while(cin >> n && n != 0){
        c=0;

        if(arr[n]==0) c=0;
        else{
            c++;
            for(i=n; n>1; i++){
                if(arr[i] == 1) c++;
                else break;
            }

            for(i=n-1; n>1; i--){
                if(arr[i] == 1) c++;
                else break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
