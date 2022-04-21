#include<bits/stdc++.h>
#define ll long long

using namespace std;
int n,k;
char ch[27];
bool used[27];
int p=0;
void permutation(int pos)
{
    if(k == 0)
        return;
    else if(pos == n)
    {
        k--;
        for(int i=0; i<n; i++)
            cout << ch[i];
        cout << endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(used[i])
            continue;
        used[i] = 1;
        ch[pos] = i+'A';
        permutation(pos+1);
        cout << ++p << " "<< i <<"\n";
        used[i] = 0;
    }
}
int main()
{

    int t,cas=1;
    cin >> t;
    while(t--)
    {
        memset(used,0,sizeof used);
        cin >> n >> k;
        cout << "Case " << cas++ << ":\n";
        permutation(0);
    }
}
