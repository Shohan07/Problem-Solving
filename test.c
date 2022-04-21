#include<stdio.h>

int main()
{
    char ch;

    while(scanf("%c", &ch)){

        if((ch >= 'A' && ch <= 'E') || (ch >= 'a' && ch <= 'e')){
            printf("1st interval\n");
        }
        else if((ch >= 'F' && ch <= 'J') || (ch >= 'g' && ch <= 'j')){
            printf("2nd interval\n");
        }
        else if((ch >= 'K' && ch <= 'O') || (ch >= 'k' && ch <= 'o')){
            printf("3rd interval\n");
        }
        else if((ch >= 'P' && ch <= 'T') || (ch >= 'p' && ch <= 't')){
            printf("4th interval\n");
        }
        if((ch >= 'U' && ch <= 'Y') || (ch >= 'u' && ch <= 'z')){
            printf("5th interval\n");
        }
    }
}
