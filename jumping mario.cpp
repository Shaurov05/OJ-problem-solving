#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1 ; i<=t ; i++)
    {
        int n , ara[50] , j,k=0,l=0, hj=0 , lj=0 ;
        scanf("%d", &n);
        for(j=0 ; j<n ; j++){
            scanf("%d", &ara[j]);
            k = ara[j];

            if(l>0){
            if(ara[j-1] > ara[j]){
                lj++;
            }
            else if(ara[j-1] < ara[j]){
                hj++;
            }

            }
            l++;
            }
            printf("Case %d: %d %d\n", i , hj ,lj);
    }
}
