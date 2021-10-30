#include<bits/stdc++.h>
using namespace std;

string check(string s)
{
    stack<char>st;

    for(auto ch : s){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
           }
        else if(ch==')'){
            if(st.empty() || (st.top() != '('))return "NO";
            st.pop();
        }
        else if(ch=='}'){
            if(st.empty() || (st.top() != '{'))return "NO";
            st.pop();
        }
        else if(ch==']'){
            if(st.empty() || (st.top() != '['))return "NO";
            st.pop();
        }
    }
    return st.empty() ? "YES" : "NO";
}


int main()
{
   int n, i;
   string s;
   cin >> n;
   for(i=0; i<n; i++){
    cin >> s;
    cout << check(s) << "\n";
   }
   return 0;
}
