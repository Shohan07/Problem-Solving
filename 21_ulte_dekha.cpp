
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i;
    char S[1000];

    scanf("%d",&T);
    while(T--)
    {
        scanf(" %[^\n]",S);
        for(i = strlen(S)-1; i>=0; i--){
            printf("%c",S[i]);
        }
        printf("\n");
    }
    return 0;
}
