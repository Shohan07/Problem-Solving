#include<stdio.h>
void Magic(int a, int *b){
 *b = *b + a;
}
int Init(){
 int a = 5, b = 7, *p;
 p = &a;
 (*p)++;
 Magic(*p, &b);
 printf("%d %d ", a, b);
 return *p;
}
int main()
{

    printf("%d\n",Init());
    return 0;
}
