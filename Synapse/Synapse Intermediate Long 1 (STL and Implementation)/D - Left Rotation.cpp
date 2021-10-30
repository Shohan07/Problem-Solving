
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, i, cnt=0;
    scanf("%d %d", &n, &d);

    int arr[100005]={0};
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
  int j = d;
     while(cnt<n-1){
            if(j>n-1)j=0;

         printf("%d ",arr[j]);
         j++, cnt++;
    }
    if(j>n-1)j=0;
    printf("%d\n",arr[j]);

   return 0;
}
