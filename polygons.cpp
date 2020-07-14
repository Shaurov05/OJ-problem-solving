#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while( scanf("%d", &t) ) {
            if(t == 0){
                break;
            }

    double x[t+1] = {0} , y[t+1]= {0} ;
    int count=0;
    double d , e=0 , f=0 ,sum=0;

    for(int i=0 ; i<t ; i++){
            scanf("%lf%lf", &x[i], &y[i]);
    }

    scanf("%lf", &d);
    d = d*2*1.0 ;

    if(t == 1){
        e = x[0]*x[0]*1.0;
        f = y[0]*y[0]*1.0;
        sum = sqrt(e+f);
        if( sum >= d ){
            count = 2;
        }
        else{
            count=3;

        }
        }

    for(int j=0 ; j<t-1 ; j++ ){
        e = fabs(x[j] - x[j+1]) ;
        e = e*e*1.0 ;
        f = fabs(y[j] - y[j+1]) ;
        f = f*f*1.0 ;
        sum = sqrt(e + f);

        if( sum >= d ){
            count = 2;
            /**printf("%0.2lf and %0.2lf , e= %.02lf , sum = %0.2lf , d = %.05lf\n" ,x[j] , x[j+1],e , sum,d );
            printf("%0.2lf and %0.2lf , f= %0.2lf , sum = %0.4lf , d = %.05lf\n" ,y[j] , y[j+1],f , sum ,d);**/
            break;
        }
        else{

            count=3;

        }
    }
    if( count==3 ){
        e = fabs(x[t-1] - x[0]) ;
        e = e*e*1.0 ;
        f = fabs(y[t-1] - y[0]) ;
        f = f*f*1.0 ;
        sum = sqrt(e + f) ;
        if( sum >= d ){
            count=2;

        }
        else{
            count=3;

        }
    }


    if(count == 3){
        printf("The polygon can be packed in the circle.\n");
    }
    else if(count == 2) {
        printf("There is no way of packing that polygon.\n");
    }
}
return 0;
}
