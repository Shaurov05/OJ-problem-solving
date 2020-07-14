#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll i , j , k , l , b , m ,p;

ll Bigmod(ll b , ll p , ll m ){
        if(p == 0){
            return 1;
        }

        ll ans = Bigmod(b , p/2 , m);

        ans = ans*ans ;
        ans = ans%m ;

        if( p%2 == 1 ){
            ans = ans*b ;
            ans = ans%m ;
        }
        return ans;
}

int main()
{
    while(cin >> b >> p >> m ){
        i = Bigmod( b , p , m );
        printf("%lld\n" , i );


    }
}
