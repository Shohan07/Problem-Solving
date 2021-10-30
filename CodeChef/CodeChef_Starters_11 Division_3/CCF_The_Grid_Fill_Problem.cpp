 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int t, n, r, c, neg;

     cin >> t;
     while(t--){
        cin >> n;
        if(n == 2){
            cout << -1 << " " << -1 << "\n" << -1 << " " << -1 << "\n";
            continue;
        }
        for(r = 0; r < n; r++){
            for(c = 0; c < n-1; c++){
                if(r == c)cout << -1 << " ";
                else cout << 1 << " ";
            }
            if(r == c)cout << -1 << "\n";
                else cout << 1 << "\n";
        }
     }
 }
