#include<bits/stdc++.h>
#define ll long long
ll b , p , m ,k , l , t;
using namespace std;

ll last3( ll b ,ll p , ll m ){
    if( p == 0)
        return 1;
    ll ans;

    ans = last3(b , p/2 , m);

    ans = ans*ans ;
    ans = ans%1000;

    if(p%2 == 1){
        ans = ans*b ;
    }
    ans = ans%1000 ;

    return ans ;
}



int main()
{
    scanf("%lld", &t);

    while(t>0){
    cin>> b >> p;
    m = 1000 ;
    double i=0.0 ;
    i = log10(b) ;
    i = i*p ;
    ///printf("i is %lf\n", i);
    i = i - (int)i ;
    ///printf("i is %lf\n", i);

    double first3 = pow(10 , i);
    first3 = first3*100 ;

    printf("%d", (int)first3);

    printf("...%03lld\n", last3(b , p , m));

    t--;
    }
}
