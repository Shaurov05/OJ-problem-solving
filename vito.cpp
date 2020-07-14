#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[500] ,n, i , j , k , l , t , d, e ,c=100000;
    scanf("%d", &t);
    while( t>0 ){
            int sum = 0;
        cin>> n ;
        a[n];
        for(i=0 ; i<n ; i++){
            scanf("%d", &a[i]);
        }
        sort(a , a+n );
        j = n/2;

    for(i=0; i<n ;i++){
        sum+= abs(a[j] - a[i] );
    }
    printf("%d\n", sum);

        t--;
    }
}
