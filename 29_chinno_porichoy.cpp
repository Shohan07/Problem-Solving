#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;



    scanf("%d ",&T);

    for(int i = 0; i < T; i++)
    {
        char h;
        scanf(" %c", &h);
        if(h >= 'a' && h <= 'z'){
            printf("Lowercase Character\n");
        }
        else if(h >= 'A' && h <= 'Z'){
            printf("Uppercase Character\n");
        }
        else if(h >= '0' && h <= '9'){
            printf("Numerical Digit\n");
        }
        else {
            printf("Special Character\n");
        }
    }

}
