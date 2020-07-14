#include<bits/stdc++.h>
using namespace std;

void prime(int n , int count)
{
    bool prime2[n+1];
    int c = count, c1=0,d=0 , p=0;
    int ara[c+1];

    memset(prime2 , true , sizeof(prime2));
    prime2[0] = false;

    for(int i=2 ; i*i<=n ; i++ ){
        if( prime2[i] ){
            for(int j=2*i ; j<=n ; j+=i ){
                prime2[j] = false;
            }
        }
    }
    for(int i=0 ; i<=n ; i++ ){
        if(prime2[i]){
            ara[p] = i ;
            ///printf("%d ", ara[p]);
            p++;
        }
    }
    ///printf("\np=%d , center=%d\n", p , ara[p/2-1]);

    if(c*2 > p){
        c1=0;
        d = p;
    }
    else if( p%2 == 1){
        c1 = (p/2 - (c-1));
        d = c1 + c+(c-1) ;
    }
    else{
        c1 = (p/2 -(c));
        d = c1+ (c*2 );
    }
    for(int i=c1 ; i<d ; i++){
        printf(" %d", ara[i]);
    }
    printf("\n");

}

int main()
{
    int n , c,cont=0 ;
    while(cin >> n >> c){

    if( n == 1){
        printf("%d %d: 1\n", n , c);
    }
    else{
    printf("%d %d:", n , c);
    prime(n,c);
    }
    printf("\n");

    }

    return 0;
}
