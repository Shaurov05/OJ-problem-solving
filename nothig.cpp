#include<bits/stdc++.h>
using namespace std;
bool prime[32000];
int ara[34033]={0};
int diff[34033]={0};

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
    for(int i=2 ; i<=32000 ; i++){
        if(prime[i] == true){
                if(i>=b && i<=c){
                    ara[p] = i;
                    ///printf("%d ", ara[p]);
                    p++;
                }
        }
    }
    ///printf("\n");
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
        int dp=0, odp=0 , index=0, flag=0 ;

        for(int i=0 ; i<p-1 ; i++){

            if(diff[i] == diff[i+1]){
                dp++;
                flag=0;
            }
            else{
                odp=dp;
                dp=0;
                flag=1;
            }

            if(odp>=1 && flag==1){
                index=i-1;
                ///cout<<"i= "<<i<< " dp= "<< dp << " odp= " << odp <<endl;

                for(int j=index ; j<=i+odp ; j++){
                    if(prime[j] = true){
                        printf("%d", ara[j]);
                        if(j<i+odp)
                            printf(" ");
                    }
                }
                odp= dp = flag = 0;
                printf("\n");
                ///printf("\nif no 1\n");

            }
            else if(dp>=1 && i==p-2){
                index=i-dp+1;
                ///cout<<"i= "<<i<< " dp= "<< dp << " odp= " << odp <<endl;

                for(int j=index ; j<=i+2 ; j++){
                    if(prime[j] = true){
                        printf("%d", ara[j]);
                        if(j<i+2)
                            printf(" ");
                    }
                }
                odp= dp = flag = 0;
                printf("\n");
                ///printf("\nif no 2\n");

            }
        }
    }
    return 0;
}
