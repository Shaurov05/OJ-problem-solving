#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>> a >> b >> c >>d  )
    {
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }

        int sum=120;
        if( a < b ){
        sum += (40-b+a);
        }
        else if(a>b) {
            sum += (a - b);
        }
        else{
            sum += 0;
        }

        if( b > c){
        sum += (40 + c - b);
        }
        else if(b<c) {
            sum += (c - b);
        }
        else{
            sum += 0;
        }


        if(c < d){
        sum += (40 + c - d);
        }
        else if(c>d) {
            sum += (c - d);
        }
        else{
            sum += 0;
        }
        printf("%d\n", sum*9);
    }
}
