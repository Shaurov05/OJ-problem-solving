#include<stdio.h>

int main()
{
    int b , c , t ,k,i,j=0,d=0;
    scanf("%d", &t);
    for(k=0 ; k<t ; k++){
        scanf("%d%d", &b, &c);

        if(b*2 > c){
            printf("-1\n");
        }
        else{
            for(i=b ; i<b*2 ; i++){
                j=i+1;
                d = GCD(b , j);
                ///printf("GCD of %d and %d is = %d\n", b ,j ,d );
                if( d == b && c%b==0 && c%j==0 ){
                    printf("%d %d\n", b , c);
                    break;
                }
                else{
                    d = 0;
                }

            }

            if(d==0){
                printf("-1\n");
            }

        }
    }
    return 0;
}
