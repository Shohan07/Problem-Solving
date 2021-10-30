#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, j;
    char S[100];

    while(T--)
    {
        scanf(" %[^\n]",S);
        for(i = 0; S[i] != '\0'; i++)
        {
            if(S[i] >= 'A' && S[i] <= 'Z')
            {
                printf("%d", S[i] - 64);
            }
        }
        printf("\n");
    }
    return 0;
}
