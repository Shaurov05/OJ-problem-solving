#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int j,l,m,n,count;
    signed int k ,ans;
    scanf("%d" , &n);
    for(j=0 ; j<n ;j++){
            count=1;
    scanf("%d", &k);
    for(l=1 ;l<=6 ;l++){
        if(count==1){
            ans= k*567;
            count++;
        }
        else if(count==2){
            ans= ans/9;
            count++;
        }
        else if(count==3){
            ans= ans+7492;
            count++;
        }
        else if(count==4){
            ans= ans*235;
            count++;
        }
        else if(count==5){
            ans= ans/47;
            count++;
        }
        else if(count==6){
            ans= ans-498;
            count++;
        }
    }
    m=ans/10;
    m=m%10;
    printf("%d\n", abs(m));
    }
}
