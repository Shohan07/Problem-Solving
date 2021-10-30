#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[6];
    int number = 1;

    while (scanf("%s",s))
    {
        if(s[0] == '*'){
            break;
        }
        else if(s[0] == 'H'){
           printf("Case %d: Hajj-e-Akbar",number++);
        }
        else {
            printf("Case %d: Hajj-e-Asghar\n", number++);
        }
    }
    return 0;
}
