#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0 ,e=0 ,f=0 ,g=0,h=0 ,i=0 ;
    while( scanf("%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i)==9 ){
    char s[][4]= { "BCG", "BGC", "CBG", "CGB", "GBC", "GCB" };
    int ara[6] = {0},j,k=0,l,mi=2000000000,cont= 0;
    ara[0] = d+g+c+i+e+b;
    ara[1] = d+g+b+h+c+f;
    ara[2] = f+i+a+g+b+e;
    ara[3] = f+i+b+h+a+d;
    ara[4] = e+h+a+g+c+f;
    ara[5] = e+h+c+i+a+d;

    for(j=0 ; j<6 ;j++){
        if( ara[j] < mi){
            k=j;
            mi = ara[j] ;
        }
    }
    printf("%s %d\n", s[k],mi);

    }
    return 0;
}
