#include<stdio.h>
#include<string.h>

int main()
{
    while(1){
    int ara[7]={0} , ar[10], j,k=0,l,mi=10000000 , cont= 0 ;
    char s[][4]= { "BCG", "BGC", "CBG", "CGB", "GBC", "GCB" };

    for(j=0 ; j<9 ;j++){
        scanf("%d", &ar[j]);
    }

    ara[0] = ar[3]+  ar[6]+ ar[2]+ ar[8]+ ar[4]+ ar[1] ;
    ara[1] = ar[3]+  ar[6]+ ar[1]+ ar[7]+ ar[2]+ ar[5] ;
    ara[2] = ar[5]+  ar[8]+ ar[0]+ ar[6]+ ar[1]+ ar[4] ;
    ara[3] = ar[5]+  ar[8]+ ar[1]+ ar[7]+ ar[0]+ ar[3] ;
    ara[4] = ar[4]+  ar[7]+ ar[0]+ ar[6]+ ar[2]+ ar[5] ;
    ara[5] = ar[4]+  ar[7]+ ar[2]+ ar[8]+ ar[0]+ ar[3] ;

    for(j=0 ; j<6 ;j++){
        if( ara[j] < mi){
            mi = ara[j] ;
            k = j;
        }
    }
        printf("%s %d\n", s[k],mi);

    }
}
