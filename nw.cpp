#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t , i ,w , y, z, n ,k ,m,count, count1= 1;
    cin>> t ;
    for(i=0 ; i< t ;i++)
    {
        int count4=0;
        cin>> n >> k >> m ;
        int c=pow(2 , n) , d=0 ;
        for(int j=1 ; j< c ; j++)
        {
            int remainder = 0 ,vagfol=j ,i=0 ,count2=0 ,a=1, ara[15]={0};
            while(vagfol != 0)
            {
                remainder= vagfol%2;
                ara[i]= remainder ;
                vagfol= vagfol/2;
                i++;
            }
                if(i>1){
        for(int l=0 ; l<i ; l++){
                if(ara[l] ==1 &&  ara[l+1]==1 ){
                    count4 ++ ;
                    break ;
                }
                else{
                    continue;
                }
        }}
        }
        printf("%d\n", c);
        printf("number of 1 is = %d\n", count4);
        c=c-count4;
        printf("after loop c is = %d\n", c);
        d= pow(k , c);
        d= d%m;
        printf("ans is %d\n\n" , d);
    }

}
