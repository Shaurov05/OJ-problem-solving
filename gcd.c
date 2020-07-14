#include<stdio.h>

int GCD(int i , int j ){
    int l ,sump=1 ;

    for( l = i ; l>=2 ; l--)
    {
        if(i%l==0 && j%l==0){
            sump = l;
            break;
        }
    }
    return sump;
}

int main()
{
    int b ;
    while( scanf("%d", &b) == 1 ){
        if(b == 0){
            break;
        }
        int G=0 , i , j;
        for(i=1;i<b;i++){
            for(j=i+1;j<=b;j++)
            {
                G = G + GCD(i,j);
            }
        }
        printf("%d\n" , G);
    }
    return 0;
}
