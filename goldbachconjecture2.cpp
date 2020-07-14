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
            int b=0 , c=0, cont=0,p=0;
        for(int i=3 ; i<=n/2 ; i+=2){
            if(prime[i]==true && prime[n-i]==true){
                if(((n-i)-i) >= cont)
                {
                    cont = (n-i)-i;
                    b= i;
                    c= n-i;
                    p++;
                }
            }
        }
        if(p==0)
            cout<< "Goldbach's conjecture is wrong.\n" ;
        else
            cout<<n << " = " << b << " + " << c<<endl;

    }
    return 0;
}
