#include<bits/stdc++.h>
using namespace std;

void humble(int n)
{
    int ara[6000] ={0},i, target=0 , cand2=0 , cand3=0 , cand5=0 , cand7=0,index2=0 , index3=0 ,index5=0, index7=0 ;
    ara[0] = 1 ;
    for(i=1 ; i<=n ; i++){

        target = ara[i-1]+1 ;

        while( (cand2= 2*ara[index2]) < target )
            index2++;

        while( (cand3= 3*ara[index3]) < target )
            index3++;

        while( (cand5= 5*ara[index5]) < target )
            index5++;

        while( (cand7= 7*ara[index7]) < target )
            index7++;

            ara[i] = min(cand2 , min(cand3 , min(cand5 , cand7))) ;
    }

    printf("%d.\n" , ara[n-1]);

}

int main()
{
    int b;
    while(cin >> b)
    {
        if(b==0){
            break;
        }

        if(b%100>=11 && b%100<=20){
            printf("The %dth humble number is ", b);
        }
        else if(b==1 || b%10 == 1){
            printf("The %dst humble number is ", b);
        }
        else if(b==2 || b%10 == 2){
            printf("The %dnd humble number is ", b);
        }
        else if(b==3 || b%10 == 3){
            printf("The %drd humble number is ", b);
        }
        else
        {
            printf("The %dth humble number is ", b);
        }

        humble(b);
    }
    return 0;
}
