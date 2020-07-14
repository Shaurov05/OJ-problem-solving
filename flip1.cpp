#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)!= EOF){
        int ara[n] , count=0 , ara2[n] , j ,k , l , temp=0 ,c=0 ,d=0 ;

        for(int i=0 ; i< n ; i++){
            scanf("%d", &ara[i]);
            ara2[i] = ara[i];
        }

        sort(ara2 , ara2+n);
        /**for(int i=0 ; i< n ; i++){
            printf("%d ", ara2[i]);
        }**/
        for( j=0 ; j<n-1 ; j++){
            for( k=0 ; k<n ;k++){
                if(ara2[j] == ara[k]){
                        c=max(j , k);
                        d=min(j , k);

                        for(l=c ; l>d ; l--){
                            count++;
                            ///printf("ara[%d] = %d ara2[%d] = %d count= %d\n",k,ara[k], j,ara2[j],count);
                            temp = ara[l];
                            ara[l] = ara[l-1];
                            ara[l-1] = temp;

                        }
                        ara[j] = -1;
                        break;
                    }
                }
            }
        printf("Minimum exchange operations : %d\n", count);
    }
}
