#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a,&b,&c) && (a!=0 && b!=0 && c!=0)){
            int i,j,k,sum;
            if(a>b && a>c){
                i=a;
                j=b;
                k=c;
            }
            else if(b>a && b>c){
                i=b;
                j=a;
                k=c;
            }
            else{
                i=c;
                j=b;
                k=a;
            }
            if(i*i == (j*j+k*k)){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
    }
}
