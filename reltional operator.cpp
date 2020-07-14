#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t, i;
    long long int j ,k;
    scanf("%d" ,&t);
    for(i=1 ;i<=t ;i++)
    {
        scanf("%lld %lld" , &j ,&k);
        if(j>k)
        {
            printf(">\n");
        }
        else if(j<k)
        {
            printf("<\n");
        }
        else if(j=k)
        {
            printf("=\n");
        }
    }
    return 0;
}
