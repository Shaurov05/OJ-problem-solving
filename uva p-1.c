#include<stdio.h>
int main()
{
    int i,j=0,x,y,a,b,k,cycle,n;
        while(scanf("%d %d", &x, &y)==2)
            {
                a=x;
                b=y;
                if(x>y){
                    k=x;
                    x=y;
                    y=k;
                }
        for(i=x;i<=y;i++)
        {
        cycle=1;
        for(n=i ; n!=1 ; n=n)
            {
            if(n%2==0){
                n=n/2;
            }
            else{
                n=3*n+1;
            }
            cycle++;
            }
            if(j<cycle)
                {
                    j=cycle;
                }
        }
    printf("%d %d %d\n",a,b,j);
            }
}
