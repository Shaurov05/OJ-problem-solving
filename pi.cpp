#include<bits/stdc++.h>
using namespace std;
#define ii int
ii  a, flag1=0 , flag2 = 0 , i , j , k , gcd=0 ;
double ans ;

int main()
{
    while( cin>>a ){
        flag1=0 , flag2 = 0;
        if(a == 0){
            break;
        }
        ans=0.0;
        int ara[a];

        for( i=0 ; i<a ; i++ ){

            scanf("%d", &ara[i] );
        }

        for( i=0 ; i<a ; i++ ){

            for( j=i+1 ; j<a ; j++ ){

                 gcd = __gcd(ara[i] , ara[j]);
                 if( gcd == 1 ){
                    flag1++;
                 }
            flag2++ ;
            }

            }

        if( flag1 > 0 ) {
                ans = (flag2*1.0/flag1)*6 ;
                ///printf("Flag1=%d , flag2=%d\n", flag1 , flag2 );
                ans = sqrt(ans);
                    printf("%lf\n", ans);
        }
        else{
            printf("No estimate for this data set.\n");
        }

    }
}
