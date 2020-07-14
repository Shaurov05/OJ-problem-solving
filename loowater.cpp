#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a , b;
    while(scanf("%lld%lld", &a ,&b) == 2){
        if(a==0 && b==0){
            break;
        }

        long long int goose[20005] , soldier[20005] ,sum=0 ,count=0 ;
        int i , j , k=0 ;
        for( i=0 ; i<a ; i++) {
                ///printf("goose\n");
                scanf("%lld", &goose[i]   );
        }
        for( i=0 ; i<b ; i++) {
                ///printf("soldier\n");
                scanf("%lld", &soldier[i] );
        }

        sort(goose , goose+a);
        sort(soldier , soldier+b);

        for( i=0 ; i<a ; i++){
            for( j=k ; j<b ; j++){

                if(goose[i] <= soldier[j] ){
                    ///printf("milse googse = %lld ,soldier = %lld\n", goose[i] , soldier[j]);
                    sum += soldier[j];
                    count++;
                    k = ++j ;
                    break;
                }
            }
        }
        ///printf("count %lld\n", count);
        if((a > b) || count < a){
            printf("Loowater is doomed!\n");
        }
        else{
            printf("%lld\n", sum);        }

    }
    return 0;
}
