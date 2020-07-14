#include<stdio.h>

int main()
{
    int b , c , t ,i,j,d=0;
    scanf("%d", &t);
    for(i=0 ; i<t ;i++){
        scanf("%d%d", &b, &c);

        if(c%b == 0){
            printf("%d %d\n", b ,c);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
