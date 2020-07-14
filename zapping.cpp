#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,c;
    while(scanf("%d%d", &b , &c)){
            if(b<0 && c<0)
            {
                break;
            }
        int i=0 , j=0 , k=0 , l=0 ,sum=0 ;
        i = abs(b-c);

        k = max(b,c);
        l = min(b,c);

        j =  (0 + l) + (100 - k) ;
        if(i < j){
            printf("%d\n", i);
        }
        else{
            printf("%d\n", j);
        }


    }
}
