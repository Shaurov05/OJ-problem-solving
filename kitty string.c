#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){
    int c;
    if(a>b){
        c=a-b;
    }
    else{
        c=b-a;
    }
    return c;
}
int main()
{
    int i,j,k,l,f,g,d,t,e,h;
    char a[100000],b[100000],c[100000];
    scanf("%d", &t);
    for(i=1 ;i<=t ; i++){
        scanf("%s", &a);
        scanf("%s", &b);
        d=strlen(a);
        e=strlen(b);
        g=max(d,e);
        printf("Case %d: %d\n",i,g);
    }
}
