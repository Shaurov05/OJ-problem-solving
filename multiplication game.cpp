#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d ,i, j=2 , sum = 0 ;
    while( scanf("%lld", &d) == 1 ){
    long long int p =1 , count=0;

    for( i=9 ; ; i++ ){
        count++;
        printf("multiplied %lld x %lld , ", p , i);
        p = p*i;
        printf("ans p is= %lld\n", p);
        if( p >= d){
            break;
        }

        /**if( i == 9){
            count++;
            printf("another starts!\n");
            i = 1 ;
        }**/

    }
    printf("%d\n",count);
    if( count%2 == 1 )
        printf("Stan wins.\n");
    else
        printf("Ollie wins.\n");

    }

}
