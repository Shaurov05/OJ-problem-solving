#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i , j=0 , k,l,m;
    i=3;
    for(i=3 ; i<25 ;i++){
        if( i%2 != 0){
            if(i>6){
                j++;
                printf("it is greater than 6 = %d\n", i);
            }
        }
        else{continue;}
    }
    printf("%d", j);
}
