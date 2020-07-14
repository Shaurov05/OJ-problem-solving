#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int l=0 ;l<t ;l++) {
        int a,i,j,k;
        long long int sum=0;
        scanf("%d", &a);
        long long int ara[a],ara2[a],ara3[a];
        for(i=0 ;i<a ;i++){
            scanf("%lld %lld %lld", &ara[i], &ara2[i], &ara3[i]);
        }
        for(i=0 ;i<a ;i++){
            sum+= ara[i]*ara3[i];
        }
        printf("%lld\n", sum);
    }
    return 0;
}
