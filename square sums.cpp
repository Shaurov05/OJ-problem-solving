#include<bits/stdc++.h>
using namespace std;

int ara[10][10] ;

int main()
{
    int a=0 ,b1,b2,b3,b4, c=0 , d=0 ,i=0 ,j=0 , n=0 , r1=0 , r2=0 , k=0 , l=0 ,cont1=0 , cont2=0 ;

    while( scanf("%d", &n) ){
    if(n==0){
        return 0;
    }
    if( n == 1){
        scanf("%d", &l);
        printf("Case %d: %d\n",c+1 , l );
        c++;
    }
    else if(n==2){
            scanf("%d%d%d%d", &b1,&b2,&b3,&b4);
            printf("Case %d: %d\n",c+1 , b1+b2+b3+b4 );
            c++;
    }
    else{
    for(i = 0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            scanf( "%d", &ara[i][j] );
        }
    }
    if(n%2 == 0){
        d = n/2;
    }
    else{
        d = n/2;
        d++;
    }


    int q = n-2 , p = 0, square[d]={0} , b = n ;
    r1 = 0 ;
    r2 = n-1 ;

    while( 1 ){
    for(i = r1 ; i<b ; i++ ){
        for(j = r1 ; j<b ; j++){
                if(i == r1 ||  i == r2 )
                {
                    a = ara[i][j];
                    square[p] += a ;
                }
                else if( i > r1 )
                {
                    a = ara[i][r1];
                    square[p] += a;
                    a = ara[i][r2];
                    square[p] += a;
                    break;
                }

        }
    }

    r1++ ;
    r2--;
    b-- ;
    p++;
    q--;
    if( r2 == (n/2)-1 ){
        break ;
    }
}

printf("Case %d:",c+1 );
for(i=0 ; i< p ; i++){
    printf(" %d", square[i]);
}
c++;
printf("\n");
}
    }
return 0 ;
}

