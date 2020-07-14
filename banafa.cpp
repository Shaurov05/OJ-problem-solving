#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=1;
    cin>> t;
    while(t>0)
    {
        int i ,j ,k,sum=0;
        scanf("%d%d%d", &i,&j,&k);
        sum = k%i ;
        sum += j ;
        if( sum > i){
            printf("Case %d: %d\n",p, sum-i );
            p++;
        }
        else
        {
            printf("Case %d: %d\n",p, sum);
            p++;
        }

        t--;
    }
}
