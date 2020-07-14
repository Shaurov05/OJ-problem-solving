#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){
    int c;
    if(a>b){
        c=a;
    }
    else{
        c=b;
    }
    return c;
}

int take(char a[10000]){
        int c,i,j,k,g;
        char b[10000];
        c=strlen(a);
        k=0;
        for(i=0 ; i<c-1 ;i++){
            for(j=i+1 ;j<c ;j++){
                if(a[i]== a[j]){
                   break;
                }
                else{
                    b[k]=a[i];
                    k++;
                    break;
                }
            }
            b[k]=a[c-1];
        }
        g=strlen(b);
        return g;
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
        l=0;
        for(j=0 ;j<e ;j++){
            for(k=0 ;k<d ;k++){
                if(b[j] == a[k] ){
                    c[l]=b[j];
                    l++;
                    break;
                }
                else{
                    break;
                }
            }
        }
        h=take(c);
        printf("Case %d: %d\n",i,g-h );
    }
}

