#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>PII;
const int maxn = 105;
int a[maxn], b[maxn];
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int suma = 0, sumb = 0;
        for(int i = 1; i <= n; i++)cin >> a[i], suma += a[i];
        for(int i = 1; i <= n; i++)cin >> b[i], sumb += b[i];

        if(suma != sumb){
            cout << -1 << "\n";
            continue;
        }
        vector<PII>v;
        int j = 1;
        for(int i = 1; i <= n; i++){
            while(a[i] > b[i]){
                while(a[j] >= b[j]) j++;
                v.push_back({i, j});
                a[i]--, a[j]++;
                cout << i << " j";
                for(int k = 1; k <=n; k++)cout << a[k] << " ";
                cout << "\n";
                for(int k = 1; k <=n; k++)cout << b[k] << " ";
                cout << "\n";
            }
        }
    }
}
