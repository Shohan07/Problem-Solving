
#include<bits/stdc++.h>
using namespace std;

void paddress();
char n[20][11];
int base[20];
int sizea[20];
int D[20];
int limit[20][20];
int lim;
int range[10];
int index;
int main()
{
    int N, R;
    scanf("%d %d", &N, &R);

    int i = 0;
    while(N--){
        scanf("%s %d %d %d",n[i], &base[i], &sizea[i], &D[i]);


        int temp = 0;
        int stop = (D[i]<<1);
        while(temp!=stop){

            scanf("%d",&limit[i][temp++]);

        }
        i++;
    }

    while(R--){
        char name[11];
        scanf("%s",name);

        i = 0;
        int x;
        while(1){
              x =  strcmp(name,n[i]);
            if(x==0){
                break;
            }
            i++;
        }

        lim = D[i];
         index = i;
         i =0;

        while(i != lim){
          scanf("%d",&range[i++]);

        }
        paddress();
    }
    return 0;
}

void paddress()
{
    int t = lim;
    int CD = sizea[index];
    int result = CD*range[--lim];
    int C0 = base[index] - (CD*limit[index][2*lim]);
    while(lim){
        CD = CD*(limit[index][2*lim+1] - limit[index][2*lim] + 1);
        result += (CD*range[--lim]);
        C0 -=  CD*limit[index][2*lim];
    }
    result += C0;
    printf("%s[",n[index]);

    for(int k = 0; k < t-1; k++){
        printf("%d,", range[k]);

    }
   printf("%d] = %d\n", range[t-1], result);

}
