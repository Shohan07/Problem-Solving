
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p, c, i, cas=1, n;
    deque<long long>q;
    while(cin >> p >> c){
        if(p==0 && c==0)break;
        for(i=1; i<=p && i<=1000; i++)q.push_back(i);
        cout << "Case " << cas  << ":\n";
       char ch[5];
        while(c--){
            cin >> ch;
            if(ch[0]=='N'){
                 n = q.front() ;
               q.pop_front();
                q.push_back(n);
                cout << n << "\n";
            }
            else{
                cin >> n;
                for(i = q.begin(); i !=q.end(); i++){
                    if(i == n){
                           // q.erase(i);
                            break;
                    }

                }
                q.push_front(n);
            }
        }
        q.clear();
        cas++;
    }
}
