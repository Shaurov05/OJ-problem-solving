#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int b , c ;
    int i=0;
    while(scanf("%lld%lld", &b,&c) == 2){
        long long ans=b ;
        int j,k,count= 1 ;
        if(b<0 && c<0){
            break;
        }

        while( 1 )
        {

            if(ans%2 == 0){
                ans /= 2 ;

                ///printf("ans = %lld , count= %d\n", ans , count);
            }
            else{
                ans = (3*ans + 1) ;
            }
            ///printf("ans = %lld , count= %d\n", ans , count);

            if( ans == 1 ){
                count++;
                break;
            }
            else if( ans > c ){
            break;
            }
            else
            count++;


        }

        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n", i+1 ,b ,c ,count);
        i++;

    }
return 0;
}
