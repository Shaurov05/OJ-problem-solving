#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
        for(int j=1 ; j<=t ; j++){

        int n , p , q,cont=0, total=0;
        scanf("%d%d%d", &n, &p ,&q);

        int ara[n+1];

        for(int i=0 ; i<n ; i++){
            scanf("%d", &ara[i]);
        }

        for( int i=0 ; i<n ;i++ ){
            total += ara[i];
            if(total <= q){
                cont++;
            }

            if(cont == p || total>=q){
                break;
            }
        }
        printf("Case %d: %d\n", j , cont);

    }
}
