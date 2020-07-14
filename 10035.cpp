#include<stdio.h>
#include<math.h>
int main()
{
    double l,m,r,o,a,n,area,h;
    long long int i;
    while(scanf("%lf %lld",&r,&i)!=EOF){
         n=i;
        a=(360.0/i)/2.0*(3.1416/180);
        h=(r*sin(a));
        l=2.0*(sqrt((r*r)-(h*h)));
        area=(1.0/2.0)*(l*h*n);
        printf("%.3lf\n",area);
    }
    return 0;
}
