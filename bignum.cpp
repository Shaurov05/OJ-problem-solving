#include<bits/stdc++.h>
using namespace std;
int p[10000000] ;
/**void BIgnum(int n)
{
    int i;
    double c=0.0;
    for( i=2 ; i<=n ; i++ ){
            c += log10(i);
            p[i] = ceil(c);
        }
        printf("%d\n", p[n]);
}**/
int main()
{
    int n ;
    cin>>n;

    while(n>0){
        int d;
        cin>>d;

        if(d==1){
            printf("1\n");
        }
        else
        {
            double c=0.0;
            for( int i=2 ; i<=d ; i++ ){
                c += log10(i);
                p[i] = ceil(c);
                }
            printf("%d\n", p[d]);
        }

        n--;
    }
    return 0;
}
