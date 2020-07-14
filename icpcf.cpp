#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int p , q , y ;
    long int ans;
    scanf("%d %d %d", &p ,&q ,&y);
    ans= ((p*5 +q*2)*(52*y));
    printf("%ld\n", ans);
    return 0;
}
