#include<bits/stdc++.h>
using namespace std;
long long int ara2[10000010] = {0} , ara[100005]={0} ;

int step(int seed , int mod){
    seed = seed%mod;
    return seed;
}

int main()
{
    long long int b , c ;
    while(scanf("%lld%lld", &b, &c) == 2){
        int d=0 , e, j=0 ,k=0 , l , num=0,milse=0 , mile_nai=0 ;

        e = b;

        for(int i=0 ; i<c ; i++){
            ara[i] = i ;
        }
        while(1){
            k = step(k+e , c);

            if(ara[k] == k ){
                milse++;
            }
            else{
                mile_nai++;
                break;
            }
            j++;
            if(k == 0){
                break;
            }

        }

        if(milse == c ){
            printf("%10lld%10lld    Good Choice\n", b ,c);
        }
        else{
            printf("%10lld%10lld    Bad Choice\n", b ,c);
        }
        printf("\n");
    }
    return 0;
}
