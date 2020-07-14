#include<iostream>
#include<cstdio>
using namespace std;

long long int pali(long long int a){
    long long int b=0,i;
    while (a!= 0){
            i=a%10;
            b=(b*10+i);
            a/=10;
        }
            return b;
}
int main()
{
    int t=1;
    scanf("%d", &t);
    while(t>0){
        long long int a,b,c,i=0,j,d=0;
        scanf("%lld", &a);
        for(;;){
        b=pali(a);
        c=a+b;
        d=pali(c);
        i++;
        if(d == c){
            printf("%lld %lld\n",i,c);
            break;
        }
        else{
            a=c;
        }
    }
    t--;
    }
}
