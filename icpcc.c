#include<stdio.h>
#include<math.h>
int main()
{
    int n, i ,j,k,l,m,sum=0;
    scanf("%d", &n);
    int ara[n][n];
    for(i=0 ; i<n ;i++){
    for(j=0 ; j<n ;j++){
        scanf("%d", &ara[i][j]);
    }
    }
    for(i=0 ; i<n ;i++){
        for(j=0 ;j<n ;j++){
            sum+=ara[i][j];
        }
    }
    printf("%d",sum);
}
