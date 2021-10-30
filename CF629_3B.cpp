#include <bits/stdc++.h>
using namespace std;


void nPermute(string str, long int n)
{

    long int i = 1;
    do {

        if (i == n)
            break;

        i++;
    } while (next_permutation(str.begin(), str.end()));


    cout << str<<endl;
}


int main()
{
    string str ;
    long long int n, t, k;
    cin >> n;
    while(n--){
        cin >> t >> k;
    str.assign(t-2,'a');

     str.insert(t-2, "bb", 2);

    //cout << str<<endl;

    nPermute(str, k);
    }

    return 0;
}
