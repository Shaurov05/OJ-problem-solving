#include<bits/stdc++.h>
using namespace std;
bool prime[32000];
int ara[34033]={0};
int diff[34033]={0};
int ans[34033]={0};

int sieve(int b , int c)
{
    memset(prime , true , sizeof(prime));
    prime[0] = prime[1] = false;
    int p=0, q=0,s=0 ;
    for(int i=2 ; i*i<=32000 ; i++)
    {
        if(prime[i] == true){
            for(int j=i*2 ; j<=32000 ; j+=i )
            {
                prime[j] = false;
            }
        }
    }
    for(int i=0 ; i<=32000 ; i++){
        if(prime[i] == true){
                ans[s] = i;
                s++;
                if(i>=b && i<=c){
                    ara[p] = i;
                    printf("%d ", ara[p]);
                    p++;
                }
        }
    }
    printf("\n");
    for(int i=0 ; i<p-1 ; i++){
        diff[q] = ara[i+1] - ara[i];
        ///printf("%d ", diff[q]);
        q++;
    }
    ///printf("\n");
    ///printf("p=%d\n", q);
    return q;
}


int main()
{
    int b , c;
    while(scanf("%d%d", &b,&c)==2)
    {
        int count=0,p=0, q=0;
        if(b==0 && c==0){
            break;
        }
        else if(b>c){
            swap(b,c);
        }
        p = sieve(b , c);
        int d=0 , e=0 ,f=0,k,l;

        for(int i=0 ; i<p ; i++){

            if(diff[i] == diff[i+1]){
                d++;
                e = i+1 ;
            }
            if((diff[i] != diff[i+1]) && d>0){

                    ///printf("r= %d , y=%d\n", r , y);
                    for(k=e-d , l=e+1 ; k<=e-d+diff[i] , l<=e+1+diff[i] ; k++ ,l++){
                        if(prime[k] == true){
                            printf("loop\n");
                            break;
                        }
                        if(prime[l] == true){
                            break;
                        }
                    }
            }

                    else{
                        for(int j=(e-d) ; j<=e+1 ; j++){
                            printf("%d", ara[j]);
                            if(j<=e){
                                printf(" ");
                            }
                        }
                        printf("\n");
                        d=0;
                    }
            }


        }
    return 0;
}
