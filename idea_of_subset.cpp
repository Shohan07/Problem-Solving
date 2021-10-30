#include<bits/stdc++.h>
using namespace std;
queue<int>q;
int len = 2;
    int a[]={1,2,3};
void subset(int i)
{

    if(i == len){

            cout<<q.front()<<endl;
            //return ;
        }
        return subset(i+1);
        q.push(a[i]);
        return subset(i+1);
        q.pop();
}

int main()
{
    //int a[]={1,2,3};
    int i= 0;
   // while(i!=len-1)
        subset(1);
      //  i++;
    //
}
