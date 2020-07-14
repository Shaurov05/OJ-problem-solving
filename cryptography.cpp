#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{

    double i, j ;
    while(scanf("%lf%lf", &i, &j) == 2){
    double k=0;
    k = (log(j)/i) ;
    k = exp(k) ;
    printf("%0.0lf\n", k);
    }
    return 0;
}
