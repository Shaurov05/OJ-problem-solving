#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        scanf("%d", &t);
        getchar();
        for(int i=0 ; i<t ;i++){
            long long int p=0 ,q=0 ,r=0 ,sum=0 , ara[102] = {0} ;

            char c , d= 'c' ;

            while(scanf("%c", &c) ){

                if( d == ' ' && c == '\n'){
                    p--;
                }
                if(c == '\n'){
                        break;
                }

                else if( c>= '0' && c<='9'){

                r = c - '0' ;
                ara[p] = ara[p]*10 + r;

                }
                if( (d >= '0' && d <='9') && c == ' ' ){
                    p++;
                }

                d = c;

            }

            for(int j=0 ; j<=p ;j++){
                    for(int k=j+1 ; k<=p ; k++){
                            q = __gcd(ara[j] , ara[k] );

                            if( q > sum ){
                            sum = q;
                            }
                    }
            }
            printf("%lld\n", sum);

        }
        return 0;

}
