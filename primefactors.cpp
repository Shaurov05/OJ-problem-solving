#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sieve(int n){
    ll k = ceil(sqrt(n));
    bool prime[k+1];
    int arr[8000]={0} ,re=0, p=0 ,d=0, ans=1 , mn=0;
    memset(prime , true , sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int i=2 ; i*i<=k ; i++){
        if(prime[i] == true){
            for(int j=i*2 ; j<=k ; j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2 ; i<= k ; i++){
        if(prime[i]== true  ){
            arr[p]=i;
            p++;
        }
    }
    ans = n ;
    for(int i=0 ; i<p ; i++ ){
        while(1){
            if(ans%arr[i] == 0 )
            {
                printf("%d", arr[i]);
                ans = ans/arr[i] ;
                if(ans==1){
                    break;
                }
                printf(" x ");
                mn++;
                d++;
            }
            else if( ans%arr[i] != 0 ){
                break;
            }

        }
        if(ans == 1){
            re=0;
            break;
        }
        else if(ans>1){
            re=6;
        }
    }

    if(re == 6 && mn==0){
        printf("%d", n);
    }
    else if(ans > 1){
        printf("%d", ans);
    }


}

int main()
{
    int n;
    while(scanf("%d", &n)==1){

        if(n==0){
            break;
        }
        if(n<0){
            printf("%d = -1 x ", n);
            sieve(-n);
            printf("\n");
        }
        else{
            printf("%d = ", n);
            sieve(n);
            printf("\n");
        }

    }
    return 0;
}
