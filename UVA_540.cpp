#include<bits/stdc++.h>
using namespace std;
int belongs_to[1000007];
queue<int> team_queue[1007];
queue<int> combined;
int main()
{
    int t, k, cases = 0;

     while(cin >> t && t != 0){
        for(int i = 0; i < t; i++){
            cin >> k;
            while(!team_queue[i].empty()){
                team_queue[i].pop();
            }
            while(!combined.empty()){
                combined.pop();
            }
            while(k--){
                int elem;
                cin >> elem;
                belongs_to[elem] = i;
            }
        }

     cases++;
     cout << "Scenario #" << cases << "\n";
     string command;
     int n;
     while(cin >> command,  command[0] != 'S'){
        if(command[0] == 'E'){
            cin >> n;
            int team = belongs_to[n];
            if(team_queue[team].empty()){
                combined.push(team);
            }
            team_queue[team].push(n);
        }
        else{
            int team = combined.front();
            cout <<team_queue[team].front() << "\n";
            team_queue[team].pop();

            if(team_queue[team].empty()){
                combined.pop();
            }
        }
     }
     cout << "\n";

  }
  return 0;
}
