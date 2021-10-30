
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k=0;
    string s1,s2;
    cin>>n;
    cin>>s1>>s2;
    cout << s1 <<endl << s2 <<endl << endl;
    for(i=0;i<n;i++){
        if(s1[i]!=s2[i]&&s1[i+1]!=s2[i+1]&&s1[i]!=s1[i+1]&&s1[i+1]!='\0'){
            k++;
            s1[i]=s2[i];
            s1[i+1]=s2[i+1];
        }
        else if(s1[i]!=s2[i]){
            k++;
        }
    }
    cout<<k<<endl;
    return 0;
}
