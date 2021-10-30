    #include<bits/stdc++.h>
    using namespace std;

    int  x;
   int  power(int a, int b, int m)
    {

        if(b==1)
        {
            return a % m;
        }
        if((b & 1) == 1)
        {
            return (( power(a,b-1,m) * a ) % m);
        }
        else{
            x = power(a, b/2, m);
            x = (x * x) % m;
            return x;
        }

    }

    int main()
    {
       unsigned long long int  a, b, m;
       scanf("%lld %lld %lld", &a, &b, &m );

       printf("%d",power(a, b, m));
       return 0;
    }
