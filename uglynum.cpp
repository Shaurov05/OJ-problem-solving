#include<bits/stdc++.h>
using namespace std;
int ara[1501] = {0};
int ugly(int n)
{
    int cand2=0 , cand3=0 , cand5=0 ;
    int ind2=0 , ind3=0 , ind5=0 ,target=0;
    ara[0] = 1 ;
    for(int i=1 ; i<n ; i++ )
    {
        target = ara[i-1]+1 ;

        while( (cand2 = 2*ara[ind2] ) < target ){
            ind2++;
        }
        while( (cand3= 3*ara[ind3] ) < target ){
            ind3++;
        }
        while( (cand5 = 5*ara[ind5] ) < target ){
            ind5++;
        }
        ara[i] = min(cand2 , min(cand3 , cand5) );
        ///printf("ara[%d] = %d \n", i , ara[i]);

    }
    return ara[n-1];

}

int main()
{
    int n=1500 ;

    printf("The 1500'th ugly number is %d.\n" , ugly(n) );

}
