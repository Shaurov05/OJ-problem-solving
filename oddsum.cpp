#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i= 0 ;i<t ;i++){
        int a,b, sum=0;
        scanf("%d%d", &a,&b);
        while(a<=b){
                if(a%2!=0){
                sum+= a;
                }
                a++;
        }
        printf("Case %d: %d\n", i+1 ,sum);
    }
    return 0;
}
