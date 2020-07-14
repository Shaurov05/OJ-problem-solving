#include<bits/stdc++.h>
using namespace std;
bool prime[10000001]={0};
int ara[664580]={0};

void sieve()
{
    int p=0;
    memset(prime , true , sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2 ; i*i<10000000 ; i++){
        if(prime[i]){
            for(int j=i*2 ; j<10000000 ; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2 ; i<10000000 ; i++){
        if(prime[i]){
            ara[p] = i;
            p++;
        }
    }
}

int main()
{
    sieve();
    long long d;
    while(cin>>d){
            if(d==0)
            break;

        int l = 0 ,j=0 , cont=0, e=0 , p=0;
        if(d<0)
            d = -d;
        long long ans= d ;
        for(int i=0 ; ara[i] < d/2 ; i++){
                while(ans%ara[i] == 0){
                    if(ara[i] > e){
                    cont++;
                    }

                    e = ara[i];
                    ans = ans/ara[i] ;
                    if(ans%ara[i] != 0){
                        p=0;
                        break;
                    }
                }
            if(ans == 1){
                break;
            }
            else if(ans > 1){
                p=3;
            }
            if(i == 664578){
                break;
            }
        }
        if( ans==d || (cont <= 1 && p==0 ) ){
            cout<< "-1"<<endl ;
        }
        else if(ans == 1) {
            cout<<e<<endl;
        }
        else if(ans>1 && p==3){
            cout<<ans<<endl;
        }
    }

}
