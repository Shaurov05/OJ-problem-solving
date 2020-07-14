#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t>0){
        int a,b,c,d,i,j,k,count=0;
        double sum=0;
        scanf("%d", &a);
        double ara[a];

        for(i=0 ; i<a ;i++){
            scanf("%lf", &ara[i]);
            sum+=ara[i];
        }

        sum=(sum/a)*1.0;
        for(i=0 ;i<a ;i++){
            if(ara[i] > sum){
                count++;
            }
        }
        sum= (count*100*1.0)/a ;
        printf("%0.3lf%%\n", sum);

        t--;
    }
    return 0;
}
