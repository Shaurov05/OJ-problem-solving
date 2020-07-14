#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime[18500000];
int ara[4] = {0};
map<int , int>twin;

void sieve(){
    memset(prime , true , sizeof(prime));
    int p=0, q=1 , r ,s=0 ,b=0 , c=0 ,d=0;
    prime[0] = prime[1] = false;
    for(int i=2 ; i*i<=18500000 ; i++ ){
        if(prime[i]){

            for(int j=i*2 ; j<=18500000 ; j+=i ){
                prime[j] = false ;
            }
        }
    }
    for(int i=3 ; i<=18500000 ; i++){
        if(prime[i] == true){
            ara[p] = i;
            p++;

            r=p-1;
            if(p>1){
                if( (ara[r] - ara[r-1]) == 2){
                    twin[q] = ara[r-1] ;
                    q++;
                }
            }
        }
        if(p==2){
            ara[p-2]= ara[p-1];
            p=1;
        }
    }
}

int main()
{
    sieve();
    int n;
    while(cin>>n)
    printf("(%d, %d)\n", twin[n], twin[n]+2);

    return 0;
}
