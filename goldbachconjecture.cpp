#include<bits/stdc++.h>
using namespace std;

bool prime[32770];
int ara[3600]={0};
void sieve()
{
    int p=0 ;
    memset(prime , true , sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i=0 ; i*i<32770 ; i++){
        if(prime[i]){

            for(int j=i*2 ; j<32770 ; j+=i){
                prime[j] = false;
            }
        }
    }
    /**for(int i=0 ; i<32770 ; i++){
        if(prime[i]){
            ara[p]=i;
            ///printf("%d ", ara[p]);
            p++;
        }
    }**/
}

int main()
{
    sieve();
    int n;
    while(cin>>n){
            if(n==0){
                break;
            }
            int count=0;
        for(int i=2 ; i<= n/2 ; i++){
            if(prime[i] == true && prime[n-i]== true ){
                count++;
            }
        }
        cout<<count <<endl;
    }
    return 0;
}
