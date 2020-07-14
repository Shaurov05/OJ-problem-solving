#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while(cin>> a && a>-1){
        int ara[100]={0}, i=0 ,r=0 , k=0 , v=0;
        i = a;
        while(1){

            r= i%3;
            ara[v]= r;
            v++;

            i = i/3;

            if(i==0 ){
                break;
            }

        }
        for(i = v-1 ; i>=0 ; i-- ){

                    printf("%d",ara[i]);

        }
        printf("\n");
    }
    return 0;
}
