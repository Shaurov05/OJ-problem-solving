#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int k,j,l,ans, m,n,count;
    signed int i;
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
            ans= k/9;
            count++;
        }
        else if(count==3){
            ans= k+7492;
            count++;
        }
        else if(count==4){
            ans= k*235;
            count++;
        }
        else if(count==5){
            ans= k/47;
            count++;
        }
        else if(count==6){
            ans= k-498;
            count++;
        }
    }
    m=ans/10;
    m=m%10;
    }
}
