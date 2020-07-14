#include<stdio.h>
#include<math.h>
long long int i,j,k,b;
int main()
{
    while(scanf("%lld %lld", &i ,&j) !=EOF){
        if(i > j){
            k=i;
            i=j;
            j=k;
        }
        b=(j-i);
        printf("%lld\n", b);
    }
    return 0;
}
