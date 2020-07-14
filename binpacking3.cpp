#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    while(1){
    int ara[7]={0} , ar[10], ara2[6], a=0 ,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j,k=0,l,mi=10000000 , cont= 0 ;
    char s[][4]= { "BCG", "BGC", "CBG", "CGB", "GBC", "GCB" };

    for(j=0 ; j<9 ;j++){
        cin>> ar[j];
    }

    ara2[0] = ara[0] = ar[3]+  ar[6]+ ar[2]+ ar[8]+ ar[4]+ ar[1] ;
    ara2[1] = ara[1] = ar[3]+  ar[6]+ ar[1]+ ar[7]+ ar[2]+ ar[5] ;
    ara2[2] = ara[2] = ar[5]+  ar[8]+ ar[0]+ ar[6]+ ar[1]+ ar[4] ;
    ara2[3] = ara[3] = ar[5]+  ar[8]+ ar[1]+ ar[7]+ ar[0]+ ar[3] ;
    ara2[4] = ara[4] = ar[4]+  ar[7]+ ar[0]+ ar[6]+ ar[2]+ ar[5] ;
    ara2[5] = ara[5] = ar[4]+  ar[7]+ ar[2]+ ar[8]+ ar[0]+ ar[3] ;

    sort(ara2 ,ara2+6);
    for(j=0 ; j<6 ;j++){
        if( ara2[0] == ara[j]){
            mi = ara[j] ;
            k = j;
            break;
        }
    }

        printf("%s %d\n",s[k],mi);


    }
}
/**
1 3 3 5 3 3 9 3 3
69 804 872 531 431 698 692 480 859
**/
