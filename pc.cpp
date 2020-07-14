
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ac,d ,soldier[100], b=-3 , c=-1;
    for(int i=0 ; i<b ; i++){
            scanf("%d", &soldier[i]);
        }
    for(int i=0 ; i<b ; i++){
            printf("%d ", soldier[i]);
        }
        printf("\n");
        sort(soldier ,soldier+b );
        for(int i=0 ; i<b ; i++){
            printf("%d ", soldier[i]);
        }
        printf("\n");
        printf("sort er age jhamela\n");
        sort(soldier , soldier+c );
        printf("pore jhamela\n");
        for(int i=0 ; i<c ; i++){
            printf("%d ", soldier[i]);
        }
        printf("\n");
        return 0;
}
