#include<bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
    const int max_size = 26;

    int charCount[max_size] = {0};

    for(int i = 0; i < str.length(); i++)
    {
         charCount[str[i] - 'a']++;
    }

    for(int i = 0; i < max_size; i++)
    {
        for(int j = 0; j < charCount[i]; j++)
        {
            cout << (char)('a' + i);
        }
     }
}
int main()
{
    string s = "geeksforgeeks";
    sortString(s);
    return 0;
}
