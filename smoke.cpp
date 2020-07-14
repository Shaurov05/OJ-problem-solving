#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int o,p;
    while(scanf("%lld%lld", &o,&p) != EOF){
        long long int count=o,i,m=0,r=o,j=p,k=0;
        while( 1 ){
            m = o/p ;
            r = o%p ;
            count += m ;
            o= r+m ;
            if(o<p){
                break;
            }
        }
        printf("%lld\n", count);
    }
}
