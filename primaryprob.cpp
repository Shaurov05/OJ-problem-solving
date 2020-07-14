#include<bits/stdc++.h>
using namespace std;
bool prime[1000001]={0};

void sieve()
{
    memset(prime , true , sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2 ; i*i<1000001 ; i++){
        if(prime[i]){
            for(int j=i*2 ; j<1000001 ; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    while(cin>>n){
            if(n==0){
                break;
            }
            printf("%d:\n", n);
            int b=0 , c=0,p=0;
            for(int i=2 ; i<=n/2 ; i++){
                if(prime[i]==true && prime[n-i]==true){
                    printf("%d+%d\n",i, n-i);
                    p++;
                    break;
                }
            }
            if(p==0){
                cout<< "NO WAY!\n";
            }

    }
    return 0;
}
