#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
        while(scanf("%d %d", &a,&b)){
        int ara[1000]= {0} ;
        ara[0]= 1;
        ara[1]=2;
        ara[2]=3;
        ara[3]=5;
        int half ,i,j,c=0,d=0 ,l=0, count=4 , k=4;
        for(j=6 ; j<=a ;j++){
        half=j/2;
        for(i=2 ;i<=half ;i++)
        {
        if(j%i ==0 )
        {
            l=3;
            break;
        }
        else{
            l=4;
        }
        }
        if(l == 4){
                count++;
                ara[k] = j ;
                k++;
            }
        else{
            continue;
        }
        }
        if(b*2 > count){
            c=1;
            d=k;
        }
        else if(count%2 != 0){
            c= (count/2);
            d=(count/2)+ (b);
        }
        else{
            c= (count/2)-(b-1);
            d=(count/2)+(b);
        }
        printf("%d %d:",a,b);

for(i=c-1 ; i< d ;i++){
    printf(" %d", ara[i]);
}
printf("\n");
}
}
