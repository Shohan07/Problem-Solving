#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,input, input1, m = 0, p = 0, p1 = 0;
    double sn = 0, rp = 0;
    vector <int> v;
    vector <int>v1;
   // vector <int> c;
     //vector <int> c1;
    cin >> n ;
    for(int i = 1; i <= n; i++){
            cin >> input;
        v.push_back(input);
       if(input == 1){
      // c.push_back(i);
        p++;
       }
    }
     for(int i = 1; i <= n; i++){

       cin >> input1;
        v1.push_back(input1);
        if(input1 == 1){
       //c1.push_back(i);
        p1++;
       }
    }

    if(v == v1) //|| (c == c1))
        cout << "-1" <<endl;


  else{
    for(int i = 1; i <= n; i++){
        if((v[i] == 1) && (v1[i] == 1)){
                m++;
              // cout << m <<endl;
        }
    }
    //cout << p <<endl<< p1 <<endl<< m <<endl ;
    sn = p1-m;
    rp = p-m;
    sn++;
    //cout <<endl << sn << rp <<endl;
    if(p ==0){
        cout << "-1"<< endl;
    }
    else{
        cout << ceil(sn/rp) << endl;
    }


  }


}
