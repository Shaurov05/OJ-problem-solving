#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while(scanf("%d", &a) && a>0 )
    {
        int i ,j ,k ,sum=0;
        for(;;){
            i=a%3;
            j=a/3;
            k=j+i;
            sum+=j;
            if(k==2){
                sum+=1;
            }
            a=k;
            if(a<=2){
                break;
            }
        }
            cout<< sum << endl;
    }
    return 0;
}
