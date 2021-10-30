
//((sin(1)+3)sin(1–sin(2))+2) sin(1–sin(2+sin(3)))+1

#include<bits/stdc++.h>
using namespace std;

void A(int n)
{
    int i=1;
    bool f = false;
    while(i<n){
        cout << "sin(" << i;
        if(f){
            cout << "+";
            f = false;
        }
        else{
            cout << "-";
            f = true;
        }
        i++;
    }
    if(i == n){
        cout << "sin(" << i;
        while(i--){
            cout << ")";
        }

    }
    //cout << endl;

}

int main()
{
    int n, c, j;
    cin >> n;
    int i = 1;
    bool f = false;
    c=n;
    j = n-1;
    while(j--){
        cout << "(";
    }
    while(i < n){
        A(i);
        cout << "+";
        cout << c << ")";

        c--;
        i++;
    }

    A(n);
    cout << "+1" << endl;
    return 0;

}
