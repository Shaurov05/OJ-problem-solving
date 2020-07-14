#include<bits/stdc++.h>
using namespace std;

int GCD(int i , int j ){
    int k, l=0 ,m=0 ,sum=0 ,sump=1 , r=0 , d=0;

    m = (i+j)/2 ;

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
    int b=10;
    while( scanf("%d", &b) == 1 ){
        if(b == 0){
            break;
        }
        int G=0 , e=0;
        for(int i=1;i<b;i++){
            for(int j=i+1;j<=b;j++)
            {
                G+=GCD(i,j);
                e = G;
                ///printf("i=%d , j=%d ,e is=%d , GCD is =%d\n", i, j ,G , e);
            }
        }
        printf("%d\n" , G);
    }
    return 0;
}
