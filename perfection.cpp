#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[100],d[100],c;
    int i=0,j=0,k,l;
    while(scanf("%d", &c) && c>0){
        int sum=0;
        d[i]= c;
        j = c/2;
        for(k=1 ; k<=j ; k++){
            if(c%k == 0){
                sum+= k;
            }
        }
        if(sum == c){
            b[i]=2;
        }
        else if(sum < c){
            b[i]=3;
        }
        else{
            b[i]=4;
        }
        i++;
    }
    printf("PERFECTION OUTPUT\n");
    for(k=0 ; k<i ;k++){
        if(b[k] == 2 ){
            printf("%5d  PERFECT\n", d[k]);
        }
        else if(b[k] == 3 ){
            printf("%5d  DEFICIENT\n", d[k]);
        }
        else{
            printf("%5d  ABUNDANT\n", d[k]);
        }
    }
    printf("END OF OUTPUT\n");
}
