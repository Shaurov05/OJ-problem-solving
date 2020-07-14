#include<stdio.h>

int main()
{
    long long int d;
    while(scanf("%lld", &d) && d >= 0){
        long long int t;
        if(d == 0){
            t=1;
        }
        else if(d == 1){
            t=2;
        }
        else if(t == 2){
            t=4;
        }
        else{
        t = ((d*(d+1)/2)+1) ;
        }
        printf("%lld\n",t);
    }
    return 0;
}

