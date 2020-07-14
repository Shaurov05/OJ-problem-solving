#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while( t>0 ){
        int n , ara[200]={0} , l ,k=0 , r=0 , s=0 ,a=0 ,b=0 ,c=0 ,d=0 ,e=0 ,f=0 ,g=0 ,h=0 ,i=0,j=0 ;
        scanf("%d", &n);
        for(l=1 ; l<=n ;l++){

                if(l>9){
                        s=l;
                        while(s > 0){
                            r = s%10;
                            s = s/10;

                    if( r == 0){
                        a++;
                    }
                    else if( r == 1){
                        b++;
                    }
                    else if( r == 2){
                        c++;
                    }
                    else if( r == 3){
                        d++;
                    }
                    else if( r == 4){
                        e++;
                    }
                    else if( r == 5){
                        f++;
                    }
                    else if( r == 6){
                        g++;
                    }
                    else if( r == 7){
                        h++;
                    }
                    else if( r == 8){
                        i++;
                    }
                    else if( r == 9){
                        j++ ;
                    }
                        }

                }
                else
                {
                    r= l%10;
                    if( r == 0){
                        a++;
                    }
                    else if( r == 1){
                        b++;
                    }
                    else if( r == 2){
                        c++;
                    }
                    else if( r == 3){
                        d++;
                    }
                    else if( r == 4){
                        e++;
                    }
                    else if( r == 5){
                        f++;
                    }
                    else if( r == 6){
                        g++;
                    }
                    else if( r == 7){
                        h++;
                    }
                    else if( r == 8){
                        i++;
                    }
                    else if( r == 9){
                        j++;
                    }
                }



        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a ,b ,c ,d, e, f, g, h, i, j);

        t--;
    }
}
/**
if( r == 0){
                        a++;
                    }
                    else if( r == 1){
                        b++;
                    }
                    else if( r == 2){
                        c++;
                    }
                    else if( r == 3){
                        d++;
                    }
                    else if( r == 4){
                        e++;
                    }
                    else if( r == 5){
                        f++;
                    }
                    else if( r == 6){
                        g++;
                    }
                    else if( r == 7){
                        h++;
                    }
                    else if( r == 8){
                        l++;
                    }
                    else if( r == 9){
                        m++;
                    }
***/
