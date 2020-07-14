#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int sum= 0 ,i=n,j=0,k=0;
        sum = n;
        while(i>1){
            k=i;
            i = i%3 ;
            j = k/3 ;
            i = i+j;
            sum += j;
            if( i == 2 ){
                sum += 1;
                break;
            }
        }

        printf("%d\n", sum);
    }
}
