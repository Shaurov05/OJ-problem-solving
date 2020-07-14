#include<stdio.h>
#include<map>

int a[1000001]={0} , b[1000001]={0};
map<long int , long int > cd;

int main()
{
    int m ,n,i,j;
    while(scanf("%d%d",&m,&n)==2){
            int count=0 , p=0;
        if(m==0 && n==0)
            break;

        for( i=0 ; i<m ; i++){
            scanf("%d", &a[i]);
            cd[a[i]] = 1;
        }
        for( i=0 ; i<n ; i++){
            scanf("%d", &b[i]);
            if(map[b[i]] == 1){
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
