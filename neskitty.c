#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
char a[100000000],b[100000000],c[100000000];
int main()
{
    int i,j,k,l,f,g,d,t,e,h,count=0;
    scanf("%d", &t);
    for(i=1 ;i<=t ; i++){
        scanf("%s", &a);
        scanf("%s", &b);
        d=strlen(a);
        e=strlen(b);
        l=0;
        for(j=0 ;j<d ;j++){
                count=0;
                for(k=0 ;k<e ;k++){

                    if(a[j] == b[k] ){
                        c[l]=a[j];
                        b[k]= '1';
                        }
                    else if(a[j] != b[k]) {
                        count++;
                        }
                    }
                    if(count != e){
                        l++;
                    }
        }
        h=strlen(c);
        printf("Case %d: %d\n",i,(d+e-h*2));
    }
    return 0;
}
