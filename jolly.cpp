#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int a[30000];
    int i=0,j,c,k,l,m,n,count,count1,count2;
    while( scanf("%d", &n) !=EOF){
            if(n==2 || n==1){
                for(i=0 ; i<n ;i++){
             scanf("%d", &a[i]);
             }
             printf("Jolly\n");
            }
            else{
        count=0,count2=0 ;
        for(i=0 ; i<n ;i++){
            scanf("%d", &a[i]);
        }

    for(l=0 ; l<n-1 ; l++ ){
        c=( a[l] - a[l+1]);
        count1=0 ,m=0;
    for(j=1 ;j<n ;j++ ){
        if(abs(c) == abs( a[j]) ){
            m++;
            break;
        }
        else if( abs(c) != a[j]){
            count1++;
        }
    }
    if(count1 == n){
        printf("Not jolly\n");
        break;
    }
    else if(n==1 || n==2 || m>0 ){
        printf("Jolly\n");
        break;
    }
    }
            }
}
return 0;
}

