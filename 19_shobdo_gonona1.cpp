#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    int T,i,c = 0;
   while(T--)
    {
       //s= getchar();
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' '){
            c++;
        }
    }
    printf("%d",c+1);
   }
    return 0;

}
