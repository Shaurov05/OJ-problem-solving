#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i=1,j,i1,i2,k,t,m,count;
    int ara[100000];
    scanf("%d", &t);
    while(i<=t){
        scanf("%d", &m);
        count=0;
        for(j=0 ;j<m ;j++){
            scanf("%d", &ara[j]);
        }
        for(i1=0 ,i2=1 ; i1<m-1 ,i2<m ;i1++ ,i2++){
            if((ara[i1]^ara[i2]) >= 2){
                count++;
            }
            }
        if(count == m-1){
        printf("Case #%d: YES\n",i);
        }
        else{
           printf("Case #%d: NO\n",i);
        }
        i++;
    }

}
