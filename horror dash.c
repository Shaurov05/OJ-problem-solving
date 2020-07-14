#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,b=1;
    scanf("%d", &t);
    while(t>0){
        int a,i,max=0;
        scanf("%d", &a);
        int ara[a];

        for(i=0 ; i<a ;i++){
            scanf("%d", &ara[i]);
            if(ara[i] > max){
                max=ara[i];
            }
        }
        printf("Case %d: %d\n",b,max);

        t--;
    }
    return 0;
}

