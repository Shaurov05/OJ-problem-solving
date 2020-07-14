#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t>0){
        long long int a , b , sum1=0 ,ans1=0 , ans2=0 ;
        double sum = 0.0;
        scanf("%lld%lld", &a, &b);
        sum = ((a+b)/2.0) ;
        ///printf("%lf\n", sum);
        sum1 = sum ;

        if( sum1 < sum || a<b ){
            printf("impossible\n");
        }
        else{
            ans1 = sum1 ;
            ans2 = (a - sum1 );
            printf("%lld %lld\n", ans1 ,ans2 );
        }

        t--;
    }
}
