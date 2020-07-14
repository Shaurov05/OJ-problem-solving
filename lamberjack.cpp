#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t>0){
        int a[4] ,b,c,d,e ;
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        ///d= max(a,b);
        sort(a , a+3 );
        if(a[0]+a[1] > a[2]){
            printf("OK\n");
        }
        else{
            printf("Wrong!!\n");
        }



        t--;
    }
}
