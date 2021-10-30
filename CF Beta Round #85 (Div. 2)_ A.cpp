
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int i, sum1, sum2, result;
    getline(cin,s1);
    getline(cin,s2);

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    result = s1.compare(s2);




    cout << result << endl;


    return 0;

}
