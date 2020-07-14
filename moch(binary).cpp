#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t,o ;
    cin>> t ;
    for(o=1 ; o<= t ;o++)
    {
        int j ,w , y, z, n ,k,m,g,l;
        cin>> n >> k >> m ;
        int c= pow(2 , n) ;
        int d ,e ,count4=0;
        for(j=1 ; j< c ; j++)
        {
            int remainder = 0 ,vagfol=j ,i=0,ara[15]= {0} ;
            while(vagfol != 0)
            {
                remainder= vagfol%2;
                ara[i]= remainder ;
                vagfol= vagfol/2;
                i++;
            }
        for(l=0 ; l<i ; l++){
                if(ara[l] ==1 &&  ara[l+1]==1 ){
                    count4++ ;
                    break ;
                }
                else{
                    continue;
                }
        }
        }
        c=c-count4;
        d= pow(k , c);
        d= d%m ;
        printf("Case %d: %d\n" ,o, d);
    }

}
