#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    while( scanf("%lld", &n) != EOF ){
            long long int sum=0;
        sum = ((n*(n+1))/2*1.0) ;
        sum = sum*sum ;
        cout << sum <<endl;
    }
    return 0;
}
