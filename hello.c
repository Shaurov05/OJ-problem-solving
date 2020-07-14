#include<stdio.h>
int main()
{
    int i,j,k=1,sum,count;
    while(scanf("%d", &i) && i>=0){
            count=0;
            sum=1;
    for(;;){
            if(i==1 || i==0 ){
                count=0;
                break;
            }
            else{
            sum=sum*2;
            count++;
            }

            if(sum==i){
                break;
            }
            else if(sum<i){
                continue;
            }
            else if(sum>i)
                break;
            }
        printf("Case %d: %d\n",k,count );
        k++;
    }
    return 0;
}
