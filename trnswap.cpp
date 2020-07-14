#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    int n,i,j=0,k,l,total=0,temp,m,o;
    scanf("%d", &n);

    int ara[n];
    for(k=0 ;k<n ;k++){
        scanf("%d", &ara[k]);
    }

    for(i=1 ;i<n ;i++)
    {
        for(j=j ; j<n ; j++){
        if(ara[j] == i){
            if((i-1) == j){
                total+=0;
                break;
            }
            else{
            m=max(i,j);
            o=min(i,j);
            for(m=m ; m>=o ; m--){
                temp= ara[m-1];
                ara[m-1]=ara[m];
                ara[m]= temp;
                total++;
            }
            break;
        }
        }
        } j=i;
    }
    printf("Optimal train swapping takes %d swaps.\n", total);
    t--;}
return 0;
}

/**temp= ara[l];
            ara[l]=ara[j];
            ara[j]= temp;

            if(l<j){
            total+=j;
            total-=l;
            printf("here for i= %d and ara[j]= %d l= %d and total=%d \n", i ,j+1,l,total);
            break;}
            else{
                total+=l;
                printf("**here for i= %d and ara[j]= %d l= %d and total=%d \n", i ,j,l,total);
                break;
            }**/
