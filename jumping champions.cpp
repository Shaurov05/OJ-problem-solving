#include<bits/stdc++.h>
using namespace std;
int ara[100000] = {0} ;
int diff[80000] = {0} ;

void jolly(int l , int n)
{
    bool prime[n+1];
    int count=0 , index=0 , a=0, cont2=0 , cont3=0, k=0 ,num=0, max=0;
    memset(prime , true , sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i=2 ; i*i<=n ; i++){
        if(prime[i] == true){
        for(int j=i*2 ; j<=n ; j+=i ){
            prime[j] = false ;
        }
        }
    }
    for(int i=l ; i<=n ; i++ ){
        if(prime[i]){
            ara[count] = i ;
            count++;
        }
    }
    for(int i=0 ; i< count-1 ; i++){
        diff[index] = ara[i+1] - ara[i];
        index++;
    }
    sort(diff , diff+index);
    if(index == 1){
        printf("The jumping champion is %d\n", diff[0]);
    }
    else{

    for(int i=k ; i<index-1 ; i++ )
    {
        cont2=0;
        a = diff[i];
        if(a != 0){

        for(int j=i+1 ; j<index ; j++ ){
            if( diff[j] == a ){
                diff[j]=0;
                cont2++;
            }
            else if( diff[j] != a ){
                k=j;
                break;
            }
        }

        if(cont2 > cont3 ){
            cont3=cont2;
            num = a ;
            max=1;
        }
        else if(cont2 == cont3 ){
            num = a;
            max++;
        }
        }
    }
    if (max== 1 && cont3>0 ) {
    printf("The jumping champion is %d\n", num);
    }
    else if(max > 0 || cont2==0){
        printf("No jumping champion\n");
    }

    }
}

int main()
{
    int t , l , u ;
    cin>>t;
    while(t>0){
        cin>> l >> u;
        jolly(l , u);
    t--;
    }
    return 0;
}
