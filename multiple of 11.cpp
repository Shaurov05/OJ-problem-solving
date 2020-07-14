#include<bits/stdc++.h>
using namespace std;

int main()
{
    string b = "0" ;
    int c =0 ,i,j=0 , d=0 ,e=0 ;
    while(getline(cin , b))
    {
        if( b == "0" ){
            break;
        }
        j = b.length() ;
        c = b[0] - '0' ;

        for( i=1 ; i<j ; i++){
            if(b[i] >= 48 && b[i]<= 57 ){

                d = b[i] - '0' ;
                d = c*10 + d ;
                ///e = b[i+1] - '0' ;

                ///printf("b[%d ] is = %c ,d = %d\n",i , b[i], d);


                c = d%11 ;
                ///printf("d= %d , c=%d\n", d,c);

                if( c>0 ){
                    d += c ;
                }
            }
        }
        ///printf("%d\n", c);
        if(c == 0){
            cout << b ;
            printf(" is a multiple of 11.\n");
        }
        else{
            cout << b;
            printf(" is not a multiple of 11.\n");
        }


    }
    return 0;
}
