#include<bits/stdc++.h>
using namespace std;
map<long int , long int > cd;

int main()
{
    long int m ,n,i,j,a,b;
    while(scanf("%ld%ld",&m,&n)==2){
            int count=0;
        if(m==0 && n==0)
            break;

        for( i=0 ; i<m ; i++){
            scanf("%ld", &a);
            cd[a] = 1;
        }
        for( i=0 ; i<n ; i++){
            scanf("%ld", &b);
            if( cd[ b ] == 1){
                count++;
            }
        }

        printf("%d\n", count);
        cd.clear();
    }
    return 0;
}
